/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#include <linux/types.h>
#include <mt-plat/mtk_battery.h>
#include <mt-plat/mtk_charger.h>
#include <mt-plat/mtk_boot.h>
#include <mtk_gauge_class.h>
#include <mtk_battery_internal.h>

#define MTK_ENABLE_BQ27541

#ifdef CONFIG_CUSTOM_BATTERY_EXTERNAL_CHANNEL
#include <custome_external_battery.h>
#endif

int __attribute__((weak)) charger_get_vbus(void)
{
	return 4500;
}

#if (CONFIG_MTK_GAUGE_VERSION != 30)
signed int battery_get_bat_voltage(void)
{
	return 4000;
}

signed int battery_get_bat_current(void)
{
	return 0;
}

signed int battery_get_bat_current_mA(void)
{
	return 0;
}

signed int battery_get_soc(void)
{
	return 50;
}

signed int battery_get_uisoc(void)
{
	int boot_mode = get_boot_mode();

	if ((boot_mode == META_BOOT) ||
		(boot_mode == ADVMETA_BOOT) ||
		(boot_mode == FACTORY_BOOT) ||
		(boot_mode == ATE_FACTORY_BOOT))
		return 75;

	return 50;
}

signed int battery_get_bat_temperature(void)
{
	return 25;
}

signed int battery_get_ibus(void)
{
	return 0;
}

signed int battery_get_vbus(void)
{
	return 0;
}

signed int battery_get_bat_avg_current(void)
{
	return 0;
}
#else

	#ifdef CONFIG_CUSTOM_BATTERY_EXTERNAL_CHANNEL
_CODE_DEFINEDE
	#else

signed int battery_get_bat_voltage(void)
{
	return pmic_get_battery_voltage();
}

signed int battery_get_bat_current(void)
{
	int curr_val;
	bool is_charging;

#ifdef MTK_ENABLE_BQ27541
	union power_supply_propval value;

	/* get battery current from external "battery" power supply if support */
	struct power_supply *bq_psy = power_supply_get_by_name("bq27541");

	if (bq_psy) {
		power_supply_get_property(bq_psy, POWER_SUPPLY_PROP_CURRENT_NOW, &value);
		printk("%s:get bq_psy success, bat_current(%d)\n",__func__, value.intval);

		return value.intval;
	}
#endif

	is_charging = gauge_get_current(&curr_val);
	if (is_charging == false)
		curr_val = 0 - curr_val;
	return curr_val;
}

signed int battery_get_bat_current_mA(void)
{
	return battery_get_bat_current() / 10;
}

signed int battery_get_soc(void)
{

#ifdef MTK_ENABLE_BQ27541
	union power_supply_propval value;

	/* get battery soc from external "battery" power supply if support */
	struct power_supply *bq_psy = power_supply_get_by_name("bq27541");

	if (bq_psy) {
		power_supply_get_property(bq_psy, POWER_SUPPLY_PROP_CAPACITY, &value);
		pr_info("s:get bq_psy success, soc(%d)\n",__func__, value.intval);

		return value.intval;
	}
#endif
	if (get_mtk_battery() != NULL)
		return get_mtk_battery()->soc;
	else
		return 50;
}

signed int battery_get_uisoc(void)
{
#ifdef MTK_ENABLE_BQ27541
		union power_supply_propval value;
		struct power_supply *bq_psy = power_supply_get_by_name("bq27541");
#endif
	int boot_mode = get_boot_mode();

	if ((boot_mode == META_BOOT) ||
		(boot_mode == ADVMETA_BOOT) ||
		(boot_mode == FACTORY_BOOT) ||
		(boot_mode == ATE_FACTORY_BOOT))
		return 75;

	/* get battery ui_soc from external "battery" power supply if support */
#ifdef MTK_ENABLE_BQ27541
	if (bq_psy) {
		power_supply_get_property(bq_psy, POWER_SUPPLY_PROP_CAPACITY, &value);
		pr_info("%s:get bq_psy success, ui_soc(%d)\n",__func__, value.intval);
		return value.intval;
	}
#endif

	if (get_mtk_battery() != NULL)
		return get_mtk_battery()->ui_soc;
	else
		return 50;
}
extern int fake_temp;

signed int battery_get_bat_temperature(void)
{
#ifdef MTK_ENABLE_BQ27541
	union power_supply_propval value;
	struct power_supply *bq_psy = power_supply_get_by_name("bq27541");
#endif
	/* TODO */
	if (fake_temp)
		return fake_temp/10;

	/* get battery temperature  from external "battery" power supply if support */
#ifdef MTK_ENABLE_BQ27541
	if (bq_psy) {
		power_supply_get_property(bq_psy, POWER_SUPPLY_PROP_TEMP, &value);
		pr_info("%s:get bq_psy success, temp(%d)\n",__func__, value.intval);
		if (value.intval >= 100)
			value.intval /= 10;

		return value.intval;
	}
#endif
	if (is_battery_init_done())
		return force_get_tbat(true);
	else
		return -127;
}

signed int battery_get_ibus(void)
{
	return pmic_get_ibus();
}

signed int battery_get_vbus(void)
{
	return charger_get_vbus();
}

signed int battery_get_bat_avg_current(void)
{
	bool valid;

	return gauge_get_average_current(&valid);
}

/* 4.9 already remove, only leave in 4.4 */
signed int battery_get_bat_uisoc(void)
{
	return battery_get_uisoc();
}

signed int battery_get_bat_soc(void)
{
	return battery_get_soc();
}

bool battery_get_bat_current_sign(void)
{
	int curr_val;

	return gauge_get_current(&curr_val);
}

int get_ui_soc(void)
{
	return battery_get_uisoc();
}

signed int battery_get_bat_avg_voltage(void)
{
	return gauge_get_nag_vbat();
}

signed int battery_meter_get_battery_current(void)
{
	return battery_get_bat_current();
}

bool battery_meter_get_battery_current_sign(void)
{
	return battery_get_bat_current_sign();
}

signed int battery_meter_get_battery_temperature(void)
{
	return battery_get_bat_temperature();
}

signed int battery_meter_get_charger_voltage(void)
{
	return battery_get_vbus();
}

unsigned long BAT_Get_Battery_Current(int polling_mode)
{
	return (long)battery_get_bat_avg_current();
}

unsigned long BAT_Get_Battery_Voltage(int polling_mode)
{
	long int ret;

	ret = (long)battery_get_bat_voltage();
	return ret;
}

unsigned int bat_get_ui_percentage(void)
{
	return battery_get_uisoc();
}

unsigned int battery_get_is_kpoc(void)
{
	return is_kernel_power_off_charging();
}

bool battery_is_battery_exist(void)
{
	return pmic_is_battery_exist();
}


void wake_up_bat(void)
{
}
EXPORT_SYMBOL(wake_up_bat);
/* end of legacy API */


/* GM25 only */
int en_intr_VBATON_UNDET(int en)
{
	return 0;
}

int reg_VBATON_UNDET(void (*callback)(void))
{
	return 0;
}

	#endif
#endif
