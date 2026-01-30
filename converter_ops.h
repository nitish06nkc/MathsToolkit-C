#ifndef CONVERTER_OPS_H
#define CONVERTER_OPS_H

// ================= TEMPERATURE CONVERSIONS =================

// Celsius to Fahrenheit
void c_to_f();

// Fahrenheit to Celsius
void f_to_c();

// Celsius to Kelvin
void c_to_k();

// Kelvin to Celsius
void k_to_c();

// Fahrenheit to Kelvin
void f_to_k();

// Kelvin to Fahrenheit
void k_to_f();

// ================= LENGTH CONVERSIONS =================

// Kilometer to Meter
void km_to_m();

// Kilometer to Centimeter
void km_to_cm();

// Meter to Kilometer
void m_to_km();

// Meter to Centimeter
void m_to_cm();

// Centimeter to Meter
void cm_to_m();

// Inch to Centimeter
void inch_to_cm();

// Centimeter to Inch
void cm_to_inch();

// Kilometer to Mile
void km_to_mile();

// Mile to Kilometer
void mile_to_km();

// Meter to Foot
void m_to_foot();

// Foot to Meter
void foot_to_m();


// ================= MASS CONVERSIONS =================

// Gram to Kilogram
void g_to_kg();

// Kilogram to Gram
void kg_to_g();

// Gram to Pound
void g_to_pound();

// Pound to Gram
void pound_to_g();


// ================= VOLUME CONVERSIONS =================

// Litre to Millilitre
void l_to_ml();

// Millilitre to Litre
void ml_to_l();

// Gallon to Litre
void gallon_to_l();

// Litre to Gallon
void l_to_gallon();

// Fluid Ounce to Millilitre
void floz_to_ml();

// Millilitre to Fluid Ounce
void ml_to_floz();

// Pint to Litre
void pint_to_l();

// Litre to Pint
void l_to_pint();

// Cubic Meter to Litre
void cubicm_to_l();

// Litre to Cubic Meter
void l_to_cubicm();

// Cubic Centimeter (cc) to Millilitre
void cc_to_ml();

// Millilitre to Cubic Centimeter (cc)
void ml_to_cc();

// ================= ENERGY CONVERSIONS =================

// Joule to Kilojoule
void joule_to_kilojoule();

// Kilojoule to Joule
void kilojoule_to_joule();

// Calorie to Joule
void calorie_to_joule();

// Joule to Calorie
void joule_to_calorie();

// Kilocalorie to Calorie
void kilocalorie_to_calorie();

// Calorie to Kilocalorie
void calorie_to_kilocalorie();

// Electron Volt to Joule
void electronvolt_to_joule();

// Joule to Electron Volt
void joule_to_electronvolt();

// Joule to Kilowatt Hour
void joule_to_kwh();

// Kilowatt Hour to Joule
void kwh_to_joule();

// ================== Speed CONVERSIONS ==================

// Km/h to m/s
void kmph_to_mps();

// m/s to Km/h
void mps_to_kmph();

// Mile/Hour to Kilometer/Hour
void mph_to_kmph();

// Kilometer/Hour to Mile/Hour
void kmph_to_mph();

// knot to Kilometer/Hour
void knot_to_kmph();

// Kilometer/Hour to knot
void kmph_to_knot();

// Mach to Kilometer/Hour
void mach_to_kmph();

// Kilometer/Hour to Mach
void kmph_to_mach();

// m/s to Mile/Hour
void mps_to_mph();

// Mile/Hour to m/s
void mph_to_mps();

// ================= Time CONVERSIONS =================

// seconds to minutes
void sec_to_min();

// minutes to seconds
void min_to_sec();

// minutes to hours
void min_to_hr();

// hours to minutes
void hr_to_min();

// hours to days
void hr_to_day();

// days to hours
void day_to_hr();

// days to weeks
void day_to_week();

// weeks to days
void week_to_day();

// weeks to months
void week_to_month();

// months to weeks
void month_to_week();

// months to years
void month_to_year();

// years to months
void year_to_month();

// ================= Data Conversions =================

// Decimal data size conversions
void decimal_data_size_converter();

// Binary data size conversions
void binary_data_size_converter();

// ================= Areas Conversions =================

// Metric Area Conversions
void metric_area_converter();

// Imperial Area Conversions
void imperial_area_converter();

// Global Area Conversions
void global_area_converter();

// ================= Pressure Conversions =================

// pascal to kilopascal
void pascal_to_kilopascal();

// kilopascal to pascal
void kilopascal_to_pascal();

// kilopascal to megapascal
void kilopascal_to_megapascal();

// megapascal to kilopascal
void megapascal_to_kilopascal();

// kilopascal to bar
void kilopascal_to_bar();

// bar to kilopascal
void bar_to_kilopascal();

// bar to atmosphere
void bar_to_atmosphere();

// atmosphere to bar
void atmosphere_to_bar();

// atmosphere to mmhg
void atmosphere_to_mmhg();

// mmhg to atmosphere
void mmhg_to_atmosphere();

//psi to kilopascal
void psi_to_kilopascal();

// kilopascal to psi
void kilopascal_to_psi();

// psi to bar
void psi_to_bar();

// bar to psi
void bar_to_psi();

// ================= Power Conversions =================

// watt to kilowatt
void watt_to_kwatt();

// kilowatt to watt
void kwatt_to_watt();

// kilowatt to megawatt
void kwatt_to_mwatt();

// megawatt to kilowatt
void mwatt_to_kwatt();

// megawatt to gigawatt
void mwatt_to_gwatt();

// gigawatt to megawatt
void gwatt_to_mwatt();

// kilowatt to horsepower
void kwatt_to_hp();

// horsepower to kilowatt
void hp_to_kwatt();

// watt to horsepower
void watt_to_hp();

// horsepower to watt
void hp_to_watt();

// watt to BTU per hour
void watt_to_btu_per_hour();

// BTU per hour to watt
void btu_per_hour_to_watt();

// ================= NUMBER SYSTEM CONVERSIONS =================

// Decimal to Binary
void dec_to_binary();

// Decimal to Octal
void dec_to_octal();

// Decimal to Hexadecimal
void dec_to_hex();

// Binary to Decimal
void binary_to_dec();

// Octal to Decimal
void octal_to_dec();

// Hexadecimal to Decimal
void hex_to_dec();

// Binary to Octal
void binary_to_octal();

// Octal to Binary
void octal_to_binary();

// Binary to Hexadecimal
void binary_to_hex();

// Hexadecimal to Binary
void hex_to_binary();

// Octal to Hexadecimal
void octal_to_hex();

// Hexadecimal to Octal
void hex_to_octal();

#endif
