#include <stdio.h>
#include "converter_ops.h"
#include "history_ops.h"
#include <string.h>

// ================= TEMPERATURE CONVERSIONS =================

// Convert Celsius to Fahrenheit
void c_to_f() {
    double c, f;
    printf("\nEnter Celsius: ");
    scanf("%lf",&c);

    f = (c*9/5)+32; // Conversion formula
    printf("\n%.2lf C = %.2lf F\n", c, f);

    // Save conversion history
    char log[200];
    sprintf(log, "TEMP: %.2lf C -> %.2lf F", c, f);
    save_history(log);
}

// Convert Fahrenheit to Celsius
void f_to_c() {
    double f, c;
    printf("\nEnter Fahrenheit: ");
    scanf("%lf",&f);

    c = (f-32)*5/9; // Conversion formula
    printf("\n%.2lf F = %.2lf C\n", f, c);

    char log[200];
    sprintf(log, "TEMP: %.2lf F -> %.2lf C", f, c);
    save_history(log);
}

// Convert Celsius to Kelvin
void c_to_k() {
    double c, k;
    printf("\nEnter Celsius: ");
    scanf("%lf",&c);

    k = c + 273.15; // Conversion formula
    printf("\n%.2lf C = %.2lf K\n", c, k);

    char log[200];
    sprintf(log, "TEMP: %.2lf C -> %.2lf K", c, k);
    save_history(log);
}

// Convert Kelvin to Celsius
void k_to_c() {
    double k, c;
    printf("\nEnter Kelvin: ");
    scanf("%lf",&k);

    c = k - 273.15; // Conversion formula
    printf("\n%.2lf K = %.2lf C\n", k, c);

    char log[200];
    sprintf(log, "TEMP: %.2lf K -> %.2lf C", k, c);
    save_history(log);
}

// Convert Fahrenheit to Kelvin
void f_to_k() {
    double f, k;
    printf("\nEnter Fahrenheit: ");
    scanf("%lf",&f);

    k = (f - 32) * 5/9 + 273.15; // Conversion formula
    printf("\n%.2lf F = %.2lf K\n", f, k);

    char log[200];
    sprintf(log, "TEMP: %.2lf F -> %.2lf K", f, k);
    save_history(log);
}

// Convert Kelvin to Fahrenheit
void k_to_f() {
    double k, f;
    printf("\nEnter Kelvin: ");
    scanf("%lf",&k);

    f = (k - 273.15) * 9/5 + 32; // Conversion formula
    printf("\n%.2lf K = %.2lf F\n", k, f);

    char log[200];
    sprintf(log, "TEMP: %.2lf K -> %.2lf F", k, f);
    save_history(log);
}

// ================= LENGTH CONVERSIONS =================

// Kilometer to Meter
void km_to_m() {
    double km, m;
    printf("\nEnter Kilo Meter: ");
    scanf("%lf",&km);

    m = km*1000;
    printf("\n%.2lf km = %.2lf m\n",km,m);

    char log[200];
    sprintf(log, "LENGTH: %.2lf km -> %.2lf m", km, m);
    save_history(log);
}

// Kilometer to Centimeter
void km_to_cm() {
    double km, cm;
    printf("\nEnter Kilo Meter: ");
    scanf("%lf",&km);

    cm = km*100000;
    printf("\n%.2lf km = %.2lf cm\n",km,cm);

    char log[200];
    sprintf(log, "LENGTH: %.2lf km -> %.2lf cm", km, cm);
    save_history(log);
}

// Meter to Kilometer
void m_to_km() {
    double m, km;
    printf("\nEnter Meter: ");
    scanf("%lf",&m);

    km = m/1000;
    printf("\n%.2lf m = %.6lf km\n",m,km);

    char log[200];
    sprintf(log, "LENGTH: %.2lf m -> %.6lf km", m, km);
    save_history(log);
}

// Meter to Centimeter
void m_to_cm() {
    double m, cm;
    printf("\nEnter Meter: ");
    scanf("%lf",&m);

    cm = m*100;
    printf("\n%.2lf m = %.2lf cm\n",m,cm);

    char log[200];
    sprintf(log, "LENGTH: %.2lf m -> %.2lf cm", m, cm);
    save_history(log);
}

// Centimeter to Meter
void cm_to_m() {
    double cm, m;
    printf("\nEnter Centi Meter: ");
    scanf("%lf",&cm);

    m = cm/100;
    printf("\n%.2lf cm = %.4lf m\n",cm,m);

    char log[200];
    sprintf(log, "LENGTH: %.2lf cm -> %.4lf m", cm, m);
    save_history(log);
}

// Inch to Centimeter
void inch_to_cm() {
    double in, cm;
    printf("\nEnter Inch: ");
    scanf("%lf",&in);

    cm = in*2.54;
    printf("\n%.2lf inch = %.2lf cm\n",in,cm);

    char log[200];
    sprintf(log, "LENGTH: %.2lf inch -> %.2lf cm", in, cm);
    save_history(log);
}

// Centimeter to Inch
void cm_to_inch() {
    double cm, in;
    printf("\nEnter Centi Meter: ");
    scanf("%lf",&cm);

    in = cm/2.54;
    printf("\n%.2lf cm = %.2lf inch\n",cm,in);

    char log[200];
    sprintf(log, "LENGTH: %.2lf cm -> %.2lf inch", cm, in);
    save_history(log);
}

// Kilometer to Mile
void km_to_mile() {
    double km, mi;
    printf("\nEnter Kilo Meter: ");
    scanf("%lf",&km);

    mi = km*0.621371;
    printf("\n%.2lf km = %.4lf miles\n",km,mi);

    char log[200];
    sprintf(log, "LENGTH: %.2lf km -> %.4lf miles", km, mi);
    save_history(log);
}

// Mile to Kilometer
void mile_to_km() {
    double mi, km;
    printf("\nEnter Mile: ");
    scanf("%lf",&mi);

    km = mi/0.621371;
    printf("\n%.2lf miles = %.4lf km\n",mi,km);

    char log[200];
    sprintf(log, "LENGTH: %.2lf miles -> %.4lf km", mi, km);
    save_history(log);
}

// Meter to Foot
void m_to_foot() {
    double m, ft;
    printf("\nEnter Meter: ");
    scanf("%lf",&m);

    ft = m * 3.28084;
    printf("\n%.2lf m = %.4lf ft\n",m,ft);
    char log[200];
    sprintf(log, "LENGTH: %.2lf m -> %.4lf ft", m, ft);
    save_history(log);
}

// Foot to Meter
void foot_to_m() {
    double ft, m;
    printf("\nEnter Foot: ");
    scanf("%lf",&ft);

    m = ft / 3.28084;
    printf("\n%.2lf ft = %.4lf m\n",ft,m);
    char log[200];
    sprintf(log, "LENGTH: %.2lf ft -> %.4lf m", ft, m);
    save_history(log);
}


// ================= MASS CONVERSIONS =================

// Gram to Kilogram
void g_to_kg() {
    double g, kg;
    printf("\nEnter Grams: ");
    scanf("%lf",&g);

    kg = g/1000;
    printf("\n%.2lf g = %.4lf kg\n",g,kg);

    char log[200];
    sprintf(log, "MASS: %.2lf g -> %.4lf kg", g, kg);
    save_history(log);
}

// Kilogram to Gram
void kg_to_g() {
    double kg, g;
    printf("\nEnter Kilo Grams: ");
    scanf("%lf",&kg);

    g = kg*1000;
    printf("\n%.2lf kg = %.2lf g\n",kg,g);

    char log[200];
    sprintf(log, "MASS: %.2lf kg -> %.2lf g", kg, g);
    save_history(log);
}

// Gram to Pound
void g_to_pound() {
    double g, lb;
    printf("\nEnter Grams: ");
    scanf("%lf",&g);

    lb = g*0.00220462;
    printf("\n%.2lf g = %.6lf lb\n",g,lb);

    char log[200];
    sprintf(log, "MASS: %.2lf g -> %.6lf lb", g, lb);
    save_history(log);
}

// Pound to Gram
void pound_to_g() {
    double lb, g;
    printf("\nEnter Pounds: ");
    scanf("%lf",&lb);

    g = lb/0.00220462;
    printf("\n%.2lf lb = %.2lf g\n",lb,g);

    char log[200];
    sprintf(log, "MASS: %.2lf lb -> %.2lf g", lb, g);
    save_history(log);
}


// ================= VOLUME CONVERSIONS =================

// Litre to Millilitre
void l_to_ml() {
    double l, ml;
    printf("\nEnter Litre: ");
    scanf("%lf",&l);

    ml = l*1000;
    printf("\n%.2lf L = %.2lf mL\n",l,ml);

    char log[200];
    sprintf(log, "VOLUME: %.2lf L -> %.2lf mL", l, ml);
    save_history(log);
}

// Millilitre to Litre
void ml_to_l() {
    double ml, l;
    printf("\nEnter Mili Litre: ");
    scanf("%lf",&ml);

    l = ml/1000;
    printf("\n%.2lf mL = %.4lf L\n",ml,l);

    char log[200];
    sprintf(log, "VOLUME: %.2lf mL -> %.4lf L", ml, l);
    save_history(log);
}

// Gallon to Litre
void gallon_to_l() {
    double gal, l;
    printf("\nEnter Gallon: ");
    scanf("%lf",&gal);

    l = gal*3.78541;
    printf("\n%.2lf gal = %.4lf L\n",gal,l);

    char log[200];
    sprintf(log, "VOLUME: %.2lf gal -> %.4lf L", gal, l);
    save_history(log);
}

// Litre to Gallon
void l_to_gallon() {
    double l, gal;
    printf("\nEnter Litre: ");
    scanf("%lf",&l);

    gal = l/3.78541;
    printf("\n%.2lf L = %.4lf gal\n",l,gal);

    char log[200];
    sprintf(log, "VOLUME: %.2lf L -> %.4lf gal", l, gal);
    save_history(log);
}

// Fluid Ounce to Millilitre
void floz_to_ml() {
    double floz, ml;
    printf("\nEnter Fluid Ounce: ");
    scanf("%lf",&floz);

    ml = floz*29.5735;
    printf("\n%.2lf fl oz = %.2lf mL\n",floz,ml);

    char log[200];
    sprintf(log, "VOLUME: %.2lf fl oz -> %.2lf mL", floz, ml);
    save_history(log);
}

// Millilitre to Fluid Ounce
void ml_to_floz() {
    double ml, floz;
    printf("\nEnter Mili Litre: ");
    scanf("%lf",&ml);

    floz = ml/29.5735;
    printf("\n%.2lf mL = %.4lf fl oz\n",ml,floz);

    char log[200];
    sprintf(log, "VOLUME: %.2lf mL -> %.4lf fl oz", ml, floz);
    save_history(log);
}

// Pint to Litre
void pint_to_l() {
    double pint, l;
    printf("\nEnter Pint: ");
    scanf("%lf",&pint);

    l = pint*0.473176;
    printf("\n%.2lf pint = %.4lf L\n",pint,l);

    char log[200];
    sprintf(log, "VOLUME: %.2lf pint -> %.4lf L", pint, l);
    save_history(log);
}

// Litre to Pint
void l_to_pint() {
    double l, pint;
    printf("\nEnter Litre: ");
    scanf("%lf",&l);

    pint = l/0.473176;
    printf("\n%.2lf L = %.4lf pint\n",l,pint);

    char log[200];
    sprintf(log, "VOLUME: %.2lf L -> %.4lf pint", l, pint);
    save_history(log);
}

// Cubic Meter to Litre
void cubicm_to_l() {
    double cubicm, l;
    printf("\nEnter Cubic Meter: ");
    scanf("%lf",&cubicm);

    l = cubicm*1000;
    printf("\n%.2lf m^3 = %.2lf L\n",cubicm,l);

    char log[200];
    sprintf(log, "VOLUME: %.2lf m^3 -> %.2lf L", cubicm, l);
    save_history(log);
}

// Litre to Cubic Meter
void l_to_cubicm() {
    double l, cubicm;
    printf("\nEnter Litre: ");
    scanf("%lf",&l);

    cubicm = l/1000;
    printf("\n%.2lf L = %.6lf m^3\n",l,cubicm);

    char log[200];
    sprintf(log, "VOLUME: %.2lf L -> %.6lf m^3", l, cubicm);
    save_history(log);
}

// Cubic Centimeter (cc) to Millilitre
void cc_to_ml() {
    double cc, ml;
    printf("\nEnter Cubic Centimeter (cc): ");
    scanf("%lf",&cc);

    ml = cc; // 1 cc = 1 ml
    printf("\n%.2lf cc = %.2lf mL\n",cc,ml);

    char log[200];
    sprintf(log, "VOLUME: %.2lf cc -> %.2lf mL", cc, ml);
    save_history(log);
}

// Millilitre to Cubic Centimeter (cc)
void ml_to_cc() {
    double ml, cc;
    printf("\nEnter Mili Litre: ");
    scanf("%lf",&ml);

    cc = ml; // 1 ml = 1 cc
    printf("\n%.2lf mL = %.2lf cc\n",ml,cc);

    char log[200];
    sprintf(log, "VOLUME: %.2lf mL -> %.2lf cc", ml, cc);
    save_history(log);
}

// =================== ENERGY CONVERSIONS =================

// Joule to Kilojoule
void joule_to_kilojoule() {
    double joule, kilojoule;
    printf("\nEnter Joules: ");
    scanf("%lf",&joule);

    kilojoule = joule / 1000;
    printf("\n%.2lf J = %.4lf kJ\n", joule, kilojoule);

    char log[200];
    sprintf(log, "ENERGY: %.2lf J -> %.4lf kJ", joule, kilojoule);
    save_history(log);
}

// Kilojoule to Joule
void kilojoule_to_joule() {
    double kilojoule, joule;
    printf("\nEnter Kilojoules: ");
    scanf("%lf",&kilojoule);

    joule = kilojoule * 1000;
    printf("\n%.2lf kJ = %.2lf J\n", kilojoule, joule);

    char log[200];
    sprintf(log, "ENERGY: %.2lf kJ -> %.2lf J", kilojoule, joule);
    save_history(log);
}

// Calorie to Joule
void calorie_to_joule() {
    double calorie, joule;
    printf("\nEnter Calories: ");
    scanf("%lf",&calorie);

    joule = calorie * 4.184;
    printf("\n%.2lf cal = %.4lf J\n", calorie, joule);

    char log[200];
    sprintf(log, "ENERGY: %.2lf cal -> %.4lf J", calorie, joule);
    save_history(log);
}

// Joule to Calorie
void joule_to_calorie() {
    double joule, calorie;
    printf("\nEnter Joules: ");
    scanf("%lf",&joule);

    calorie = joule / 4.184;
    printf("\n%.2lf J = %.4lf cal\n", joule, calorie);

    char log[200];
    sprintf(log, "ENERGY: %.2lf J -> %.4lf cal", joule, calorie);
    save_history(log);
}

// Kilocalorie to Calorie
void kilocalorie_to_calorie() {
    double kilocalorie, calorie;
    printf("\nEnter Kilocalories: ");
    scanf("%lf",&kilocalorie);

    calorie = kilocalorie * 1000;
    printf("\n%.2lf kcal = %.2lf cal\n", kilocalorie, calorie);

    char log[200];
    sprintf(log, "ENERGY: %.2lf kcal -> %.2lf cal", kilocalorie, calorie);
    save_history(log);
}

// Calorie to Kilocalorie
void calorie_to_kilocalorie() {
    double calorie, kilocalorie;
    printf("\nEnter Calories: ");
    scanf("%lf",&calorie);

    kilocalorie = calorie / 1000;
    printf("\n%.2lf cal = %.2lf kcal\n", calorie, kilocalorie);

    char log[200];
    sprintf(log, "ENERGY: %.2lf cal -> %.2lf kcal", calorie, kilocalorie);
    save_history(log);
}

// Electron Volt to Joule
void electronvolt_to_joule() {
    double ev, joule;
    printf("\nEnter Electron Volts: ");
    scanf("%lf",&ev);

    joule = ev * 1.60218e-19;
    printf("\n%.2lf eV = %.6e J\n", ev, joule);

    char log[200];
    sprintf(log, "ENERGY: %.2lf eV -> %.6e J", ev, joule);
    save_history(log);
}

// Joule to Electron Volt
void joule_to_electronvolt() {
    double joule, ev;
    printf("\nEnter Joules: ");
    scanf("%lf",&joule);

    ev = joule / 1.60218e-19;
    printf("\n%.2lf J = %.2lf eV\n", joule, ev);

    char log[200];
    sprintf(log, "ENERGY: %.2lf J -> %.2lf eV", joule, ev);
    save_history(log);
}

// Kilowatt Hour to Joule
void kwh_to_joule() {
    double kwh, joule;
    printf("\nEnter Kilowatt Hours: ");
    scanf("%lf",&kwh);

    joule = kwh * 3.6e6;
    printf("\n%.2lf kWh = %.2lf J\n", kwh, joule);

    char log[200];
    sprintf(log, "ENERGY: %.2lf kWh -> %.2lf J", kwh, joule);
    save_history(log);
}

// Joule to Kilowatt Hour
void joule_to_kwh() {
    double joule, kwh;
    printf("\nEnter Joules: ");
    scanf("%lf",&joule);

    kwh = joule / 3.6e6;
    printf("\n%.2lf J = %.6lf kWh\n", joule, kwh);

    char log[200];
    sprintf(log, "ENERGY: %.2lf J -> %.6lf kWh", joule, kwh);
    save_history(log);
}

// ================= Speed Conversion =================

// Meter/Second to Kilometer/Hour
void mps_to_kmph() {
    double mps, kmph;
    printf("\nEnter Meter/Second: ");
    scanf("%lf",&mps);

    kmph = mps * 3.6;
    printf("\n%.2lf m/s = %.2lf km/h\n", mps, kmph);

    char log[200];
    sprintf(log, "SPEED: %.2lf m/s -> %.2lf km/h", mps, kmph);
    save_history(log);
}

// Kilometer/Hour to Meter/Second
void kmph_to_mps() {
    double kmph, mps;
    printf("\nEnter Kilometer/Hour: ");
    scanf("%lf",&kmph);

    mps = kmph / 3.6;
    printf("\n%.2lf km/h = %.4lf m/s\n", kmph, mps);

    char log[200];
    sprintf(log, "SPEED: %.2lf km/h -> %.4lf m/s", kmph, mps);
    save_history(log);
}

// Miles/Hour to Kilometer/Hour
void mph_to_kmph() {
    double mph, kmph;
    printf("\nEnter Miles/Hour: ");
    scanf("%lf",&mph);

    kmph = mph * 1.60934;
    printf("\n%.2lf mph = %.2lf km/h\n", mph, kmph);

    char log[200];
    sprintf(log, "SPEED: %.2lf mph -> %.2lf km/h", mph, kmph);
    save_history(log);
}

// Kilometer/Hour to Miles/Hour
void kmph_to_mph() {
    double kmph, mph;
    printf("\nEnter Kilometer/Hour: ");
    scanf("%lf",&kmph);

    mph = kmph / 1.60934;
    printf("\n%.2lf km/h = %.4lf mph\n", kmph, mph);

    char log[200];
    sprintf(log, "SPEED: %.2lf km/h -> %.4lf mph", kmph, mph);
    save_history(log);
}

// Knot to Kilometer/Hour
void knot_to_kmph() {
    double knot, kmph;
    printf("\nEnter Knot: ");
    scanf("%lf",&knot);

    kmph = knot * 1.852;
    printf("\n%.2lf knot = %.2lf km/h\n", knot, kmph);

    char log[200];
    sprintf(log, "SPEED: %.2lf knot -> %.2lf km/h", knot, kmph);
    save_history(log);
}

// Kilometer/Hour to Knot
void kmph_to_knot() {
    double kmph, knot;
    printf("\nEnter Kilometer/Hour: ");
    scanf("%lf",&kmph);

    knot = kmph / 1.852;
    printf("\n%.2lf km/h = %.4lf knot\n", kmph, knot);

    char log[200];
    sprintf(log, "SPEED: %.2lf km/h -> %.4lf knot", kmph, knot);
    save_history(log);
}

// Mach to Kilometer/Hour
void mach_to_kmph() {
    double mach, kmph;
    printf("\nEnter Mach: ");
    scanf("%lf",&mach);

    kmph = mach * 1234.8;
    printf("\n%.2lf mach = %.2lf km/h\n", mach, kmph);

    char log[200];
    sprintf(log, "SPEED: %.2lf mach -> %.2lf km/h", mach, kmph);
    save_history(log);
}

// Kilometer/Hour to Mach
void kmph_to_mach() {
    double kmph, mach;
    printf("\nEnter Kilometer/Hour: ");
    scanf("%lf",&kmph);

    mach = kmph / 1234.8;
    printf("\n%.2lf km/h = %.6lf mach\n", kmph, mach);

    char log[200];
    sprintf(log, "SPEED: %.2lf km/h -> %.6lf mach", kmph, mach);
    save_history(log);
}

// Meter/Second to Miles/Hour
void mps_to_mph() {
    double mps, mph;
    printf("\nEnter Meter/Second: ");
    scanf("%lf",&mps);

    mph = mps * 2.23694;
    printf("\n%.2lf m/s = %.2lf mph\n", mps, mph);

    char log[200];
    sprintf(log, "SPEED: %.2lf m/s -> %.2lf mph", mps, mph);
    save_history(log);
}

// Miles/Hour to Meter/Second
void mph_to_mps() {
    double mph, mps;
    printf("\nEnter Miles/Hour: ");
    scanf("%lf",&mph);

    mps = mph / 2.23694;
    printf("\n%.2lf mph = %.4lf m/s\n", mph, mps);

    char log[200];
    sprintf(log, "SPEED: %.2lf mph -> %.4lf m/s", mph, mps);
    save_history(log);
}

// ================= TIME CONVERSIONS =================

// Seconds to Minutes
void sec_to_min() {
    double sec, min;
    printf("\nEnter Seconds: ");
    scanf("%lf",&sec);

    min = sec / 60;
    printf("\n%.2lf sec = %.4lf min\n", sec, min);

    char log[200];
    sprintf(log, "TIME: %.2lf sec -> %.4lf min", sec, min);
    save_history(log);
}

// Minutes to Seconds
void min_to_sec() {
    double min, sec;
    printf("\nEnter Minutes: ");
    scanf("%lf",&min);

    sec = min * 60;
    printf("\n%.2lf min = %.2lf sec\n", min, sec);
    
    char log[200];
    sprintf(log, "TIME: %.2lf min -> %.2lf sec", min, sec);
    save_history(log);
}

// Minutes to Hours
void min_to_hr() {
    double min, hr;
    printf("\nEnter Minutes: ");
    scanf("%lf",&min);

    hr = min / 60;
    printf("\n%.2lf min = %.4lf hr\n", min, hr);

    char log[200];
    sprintf(log, "TIME: %.2lf min -> %.4lf hr", min, hr);
    save_history(log);
}

// Hours to Minutes
void hr_to_min() {
    double hr, min;
    printf("\nEnter Hours: ");
    scanf("%lf",&hr);

    min = hr * 60;
    printf("\n%.2lf hr = %.2lf min\n", hr, min);

    char log[200];
    sprintf(log, "TIME: %.2lf hr -> %.2lf min", hr, min);
    save_history(log);
}

// Hours to Days
void hr_to_day() {
    double hr, day;
    printf("\nEnter Hours: ");
    scanf("%lf",&hr);

    day = hr / 24;
    printf("\n%.2lf hr = %.4lf day\n", hr, day);

    char log[200];
    sprintf(log, "TIME: %.2lf hr -> %.4lf day", hr, day);
    save_history(log);
}

// Days to Hours
void day_to_hr() {
    double day, hr;
    printf("\nEnter Days: ");
    scanf("%lf",&day);

    hr = day * 24;
    printf("\n%.2lf day = %.2lf hr\n", day, hr);

    char log[200];
    sprintf(log, "TIME: %.2lf day -> %.2lf hr", day, hr);
    save_history(log);
}

// Days to Weeks
void day_to_week() {
    double day, week;
    printf("\nEnter Days: ");
    scanf("%lf",&day);

    week = day / 7;
    printf("\n%.2lf day = %.4lf week\n", day, week);

    char log[200];
    sprintf(log, "TIME: %.2lf day -> %.4lf week", day, week);
    save_history(log);
}

// Weeks to Days
void week_to_day() {
    double week, day;
    printf("\nEnter Weeks: ");
    scanf("%lf",&week);

    day = week * 7;
    printf("\n%.2lf week = %.2lf day\n", week, day);

    char log[200];
    sprintf(log, "TIME: %.2lf week -> %.2lf day", week, day);
    save_history(log);
}

// Weeks to Months
void week_to_month() {
    double week, month;
    printf("\nEnter Weeks: ");
    scanf("%lf",&week);

    month = week / 4.34524;
    printf("\n%.2lf week = %.4lf month\n", week, month);

    char log[200];
    sprintf(log, "TIME: %.2lf week -> %.4lf month", week, month);
    save_history(log);
}

// Months to Weeks
void month_to_week() {
    double month, week;
    printf("\nEnter Months: ");
    scanf("%lf",&month);

    week = month * 4.34524;
    printf("\n%.2lf month = %.2lf week\n", month, week);

    char log[200];
    sprintf(log, "TIME: %.2lf month -> %.2lf week", month, week);
    save_history(log);
}

// Months to Years
void month_to_year() {
    double month, year;
    printf("\nEnter Months: ");
    scanf("%lf",&month);

    year = month / 12;
    printf("\n%.2lf month = %.4lf year\n", month, year);

    char log[200];
    sprintf(log, "TIME: %.2lf month -> %.4lf year", month, year);
    save_history(log);
}

// Years to Months
void year_to_month() {
    double year, month;
    printf("\nEnter Years: ");
    scanf("%lf",&year);

    month = year * 12;
    printf("\n%.2lf year = %.2lf month\n", year, month);

    char log[200];
    sprintf(log, "TIME: %.2lf year -> %.2lf month", year, month);
    save_history(log);
}

// ================= Data Storage Conversions =================

// decimal data size conversions
void decimal_data_size_converter() {
    while(1) {
        printf("\n----- Decimal Data Size Conversions -----\n");
        printf("\n1. Bits -> Bytes");
        printf("\n2. Bytes -> Bits");
        printf("\n3. Bytes -> Kilobytes");
        printf("\n4. Kilobytes -> Bytes");
        printf("\n5. Kilobytes -> Megabytes");
        printf("\n6. Megabytes -> Kilobytes");
        printf("\n7. Megabytes -> Gigabytes");
        printf("\n8. Gigabytes -> Megabytes");
        printf("\n9. Gigabytes -> Terabytes");
        printf("\n10. Terabytes -> Gigabytes");
        printf("\n11. Terabytes -> Petabytes");
        printf("\n12. Petabytes -> Terabytes");
        printf("\n13. Petabytes -> Exabytes");
        printf("\n14. Exabytes -> Petabytes");
        printf("\n15. Exabytes -> Zettabytes");
        printf("\n16. Zettabytes -> Exabytes");
        printf("\n17. Zettabytes -> Yottabytes");
        printf("\n18. Yottabytes -> Zettabytes");
        printf("\n19. Back to Main Menu\n");
        printf("\nChoose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 19) {
            break;
        }
        char log[200];
        switch (choice) {
            case 1:
                int bits;
                printf("\nEnter Bits: ");
                scanf("%d", &bits);
                printf("\n%.2d Bits = %.2lf Bytes\n", bits, bits / 8.0);
                sprintf(log, "DATA SIZE: %d Bits -> %.2lf Bytes", bits, bits / 8.0);
                save_history(log);
                break;
            case 2:
                double bytes;
                printf("\nEnter Bytes: ");
                scanf("%lf", &bytes);
                printf("\n%.2lf Bytes = %.2lf Bits\n", bytes, bytes * 8);
                sprintf(log, "DATA SIZE: %.2lf Bytes -> %.2lf Bits", bytes, bytes * 8);
                save_history(log);
                break;
            case 3:
                printf("\nEnter Bytes: ");
                scanf("%lf", &bytes);
                printf("\n%.2lf Bytes = %.6lf Kilobytes\n", bytes, bytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Bytes -> %.6lf Kilobytes", bytes, bytes / 1000);
                save_history(log);
                break;
            case 4:
                double kilobytes;
                printf("\nEnter Kilobytes: ");
                scanf("%lf", &kilobytes);
                printf("\n%.2lf Kilobytes = %.2lf Bytes\n", kilobytes, kilobytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Kilobytes -> %.2lf Bytes", kilobytes, kilobytes * 1000);
                save_history(log);
                break;
            case 5:
                printf("\nEnter Kilobytes: ");
                scanf("%lf", &kilobytes);
                printf("\n%.2lf Kilobytes = %.6lf Megabytes\n", kilobytes, kilobytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Kilobytes -> %.6lf Megabytes", kilobytes, kilobytes / 1000);
                save_history(log);
                break;
            case 6:
                double megabytes;
                printf("\nEnter Megabytes: ");
                scanf("%lf", &megabytes);
                printf("\n%.2lf Megabytes = %.2lf Kilobytes\n", megabytes, megabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Megabytes -> %.2lf Kilobytes", megabytes, megabytes * 1000);
                save_history(log);
                break;
            case 7:
                printf("\nEnter Megabytes: ");
                scanf("%lf", &megabytes);
                printf("\n%.2lf Megabytes = %.6lf Gigabytes\n", megabytes, megabytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Megabytes -> %.6lf Gigabytes", megabytes, megabytes / 1000);
                save_history(log);
                break;
            case 8:
                double gigabytes;
                printf("\nEnter Gigabytes: ");
                scanf("%lf", &gigabytes);
                printf("\n%.2lf Gigabytes = %.2lf Megabytes\n", gigabytes, gigabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Gigabytes -> %.2lf Megabytes", gigabytes, gigabytes * 1000);
                save_history(log);
                break;
            case 9:
                printf("\nEnter Gigabytes: ");
                scanf("%lf", &gigabytes);
                printf("\n%.2lf Gigabytes = %.6lf Terabytes\n", gigabytes, gigabytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Gigabytes -> %.6lf Terabytes", gigabytes, gigabytes / 1000);
                save_history(log);
                break;
            case 10:
                double terabytes;
                printf("\nEnter Terabytes: ");
                scanf("%lf", &terabytes);
                printf("\n%.2lf Terabytes = %.2lf Gigabytes\n", terabytes, terabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Terabytes -> %.2lf Gigabytes", terabytes, terabytes * 1000);
                save_history(log);
                break;
            case 11:
                printf("\nEnter Terabytes: ");
                scanf("%lf", &terabytes);
                printf("\n%.2lf Terabytes = %.6lf Petabytes\n", terabytes, terabytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Terabytes -> %.6lf Petabytes", terabytes, terabytes / 1000);
                save_history(log);
                break;
            case 12:
                double petabytes;
                printf("\nEnter Petabytes: ");
                scanf("%lf", &petabytes);
                printf("\n%.2lf Petabytes = %.2lf Terabytes\n", petabytes, petabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Petabytes -> %.2lf Terabytes", petabytes, petabytes * 1000);
                save_history(log);
                break;
            case 13:
                printf("\nEnter Petabytes: ");
                scanf("%lf", &petabytes);
                printf("\n%.2lf Petabytes = %.6lf Exabytes\n", petabytes, petabytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Petabytes -> %.6lf Exabytes", petabytes, petabytes / 1000);
                save_history(log);
                break;
            case 14:
                double exabytes;
                printf("\nEnter Exabytes: ");
                scanf("%lf", &exabytes);
                printf("\n%.2lf Exabytes = %.2lf Petabytes\n", exabytes, exabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Exabytes -> %.2lf Petabytes", exabytes, exabytes * 1000);
                save_history(log);
                break;
            case 15:
                printf("\nEnter Exabytes: ");
                scanf("%lf", &exabytes);
                printf("\n%.2lf Exabytes = %.6lf Zettabytes\n", exabytes, exabytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Exabytes -> %.6lf Zettabytes", exabytes, exabytes / 1000);
                save_history(log);
                break;
            case 16:
                double zettabytes;
                printf("\nEnter Zettabytes: ");
                scanf("%lf", &zettabytes);
                printf("\n%.2lf Zettabytes = %.2lf Exabytes\n", zettabytes, zettabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Zettabytes -> %.2lf Exabytes", zettabytes, zettabytes * 1000);
                save_history(log);
                break;
            case 17:
                printf("\nEnter Zettabytes: ");
                scanf("%lf", &zettabytes);
                printf("\n%.2lf Zettabytes = %.6lf Yottabytes\n", zettabytes, zettabytes / 1000);
                sprintf(log, "DATA SIZE: %.2lf Zettabytes -> %.6lf Yottabytes", zettabytes, zettabytes / 1000);
                save_history(log);
                break;
            case 18:
                double yottabytes;
                printf("\nEnter Yottabytes: ");
                scanf("%lf", &yottabytes);
                printf("\n%.2lf Yottabytes = %.2lf Zettabytes\n", yottabytes, yottabytes * 1000);
                sprintf(log, "DATA SIZE: %.2lf Yottabytes -> %.2lf Zettabytes", yottabytes, yottabytes * 1000);
                save_history(log);
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
}

// binary data size conversions
void binary_data_size_converter() {
    while(1) {
        printf("\n----- Binary Data Size Conversions -----\n");
        printf("\n1. Bit -> Byte");
        printf("\n2. Byte -> Bit");
        printf("\n3. Byte -> Kibibyte");
        printf("\n4. Kibibyte -> Byte");
        printf("\n5. Kibibyte -> Mebibyte");
        printf("\n6. Mebibyte -> Kibibyte");
        printf("\n7. Mebibyte -> Gibibyte");
        printf("\n8. Gibibyte -> Mebibyte");
        printf("\n9. Gibibyte -> Tebibyte");
        printf("\n10. Tebibyte -> Gibibyte");
        printf("\n11. Tebibyte -> Pebibyte");
        printf("\n12. Pebibyte -> Tebibyte");
        printf("\n13. Pebibyte -> Exbibyte");
        printf("\n14. Exbibyte -> Pebibyte");
        printf("\n15. Exbibyte -> Zebibyte");
        printf("\n16. Zebibyte -> Exbibyte");
        printf("\n17. Zebibyte -> Yobibyte");
        printf("\n18. Yobibyte -> Zebibyte");
        printf("\n19. Back to Main Menu\n");
        printf("\nChoose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 19) {
            break;
        }
        char log[200];
        switch (choice) {
            case 1:
                int bits;
                printf("\nEnter Bits: ");
                scanf("%d", &bits);
                printf("\n%.2d Bits = %.2lf Bytes\n", bits, bits / 8.0);
                sprintf(log, "DATA SIZE: %d Bits -> %.2lf Bytes", bits, bits / 8.0);
                save_history(log);
                break;
            case 2:
                double bytes;
                printf("\nEnter Bytes: ");
                scanf("%lf", &bytes);
                printf("\n%.2lf Bytes = %.2lf Bits\n", bytes, bytes * 8);
                sprintf(log, "DATA SIZE: %.2lf Bytes -> %.2lf Bits", bytes, bytes * 8);
                save_history(log);
                break;
            case 3:
                printf("\nEnter Bytes: ");
                scanf("%lf", &bytes);
                printf("\n%.2lf Bytes = %.6lf Kibibytes\n", bytes, bytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Bytes -> %.6lf Kibibytes", bytes, bytes / 1024);
                save_history(log);
                break;
            case 4:
                double kibibytes;
                printf("\nEnter Kibibytes: ");
                scanf("%lf", &kibibytes);
                printf("\n%.2lf Kibibytes = %.2lf Bytes\n", kibibytes, kibibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Kibibytes -> %.2lf Bytes", kibibytes, kibibytes * 1024);
                save_history(log);
                break;
            case 5:
                printf("\nEnter Kibibytes: ");
                scanf("%lf", &kibibytes);
                printf("\n%.2lf Kibibytes = %.6lf Mebibytes\n", kibibytes, kibibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Kibibytes -> %.6lf Mebibytes", kibibytes, kibibytes / 1024);
                save_history(log);
                break;
            case 6:
                double mebibytes;
                printf("\nEnter Mebibytes: ");
                scanf("%lf", &mebibytes);
                printf("\n%.2lf Mebibytes = %.2lf Kibibytes\n", mebibytes, mebibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Mebibytes -> %.2lf Kibibytes", mebibytes, mebibytes * 1024);
                save_history(log);
                break;
            case 7:
                printf("\nEnter Mebibytes: ");
                scanf("%lf", &mebibytes);
                printf("\n%.2lf Mebibytes = %.6lf Gibibytes\n", mebibytes, mebibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Mebibytes -> %.6lf Gibibytes", mebibytes, mebibytes / 1024);
                save_history(log);
                break;
            case 8:
                double gibibytes;
                printf("\nEnter Gibibytes: ");
                scanf("%lf", &gibibytes);
                printf("\n%.2lf Gibibytes = %.2lf Mebibytes\n", gibibytes, gibibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Gibibytes -> %.2lf Mebibytes", gibibytes, gibibytes * 1024);
                save_history(log);
                break;
            case 9:
                printf("\nEnter Gibibytes: ");
                scanf("%lf", &gibibytes);
                printf("\n%.2lf Gibibytes = %.6lf Tebibytes\n", gibibytes, gibibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Gibibytes -> %.6lf Tebibytes", gibibytes, gibibytes / 1024);
                save_history(log);
                break;
            case 10:
                double tebibytes;
                printf("\nEnter Tebibytes: ");
                scanf("%lf", &tebibytes);
                printf("\n%.2lf Tebibytes = %.2lf Gibibytes\n", tebibytes, tebibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Tebibytes -> %.2lf Gibibytes", tebibytes, tebibytes * 1024);
                save_history(log);
                break;
            case 11:
                printf("\nEnter Tebibytes: ");
                scanf("%lf", &tebibytes);
                printf("\n%.2lf Tebibytes = %.6lf Pebibytes\n", tebibytes, tebibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Tebibytes -> %.6lf Pebibytes", tebibytes, tebibytes / 1024);
                save_history(log);
                break;
            case 12:
                double pebibytes;
                printf("\nEnter Pebibytes: ");
                scanf("%lf", &pebibytes);
                printf("\n%.2lf Pebibytes = %.2lf Tebibytes\n", pebibytes, pebibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Pebibytes -> %.2lf Tebibytes", pebibytes, pebibytes * 1024);
                save_history(log);
                break;
            case 13:
                printf("\nEnter Pebibytes: ");
                scanf("%lf", &pebibytes);
                printf("\n%.2lf Pebibytes = %.6lf Exbibytes\n", pebibytes, pebibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Pebibytes -> %.6lf Exbibytes", pebibytes, pebibytes / 1024);
                save_history(log);
                break;
            case 14:
                double exbibytes;
                printf("\nEnter Exbibytes: ");
                scanf("%lf", &exbibytes);
                printf("\n%.2lf Exbibytes = %.2lf Pebibytes\n", exbibytes, exbibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Exbibytes -> %.2lf Pebibytes", exbibytes, exbibytes * 1024);
                save_history(log);
                break;
            case 15:
                printf("\nEnter Exbibytes: ");
                scanf("%lf", &exbibytes);
                printf("\n%.2lf Exbibytes = %.6lf Zebibytes\n", exbibytes, exbibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Exbibytes -> %.6lf Zebibytes", exbibytes, exbibytes / 1024);
                save_history(log);
                break;
            case 16:
                double zebibytes;
                printf("\nEnter Zebibytes: ");
                scanf("%lf", &zebibytes);
                printf("\n%.2lf Zebibytes = %.2lf Exbibytes\n", zebibytes, zebibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Zebibytes -> %.2lf Exbibytes", zebibytes, zebibytes * 1024);
                save_history(log);
                break;
            case 17:
                printf("\nEnter Zebibytes: ");
                scanf("%lf", &zebibytes);
                printf("\n%.2lf Zebibytes = %.6lf Yobibytes\n", zebibytes, zebibytes / 1024);
                sprintf(log, "DATA SIZE: %.2lf Zebibytes -> %.6lf Yobibytes", zebibytes, zebibytes / 1024);
                save_history(log);
                break;
            case 18:
                double yobibytes;
                printf("\nEnter Yobibytes: ");
                scanf("%lf", &yobibytes);
                printf("\n%.2lf Yobibytes = %.2lf Zebibytes\n", yobibytes, yobibytes * 1024);
                sprintf(log, "DATA SIZE: %.2lf Yobibytes -> %.2lf Zebibytes", yobibytes, yobibytes * 1024);
                save_history(log);
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
}

// =================== Area =================

// Metric Area Conversions
void metric_area_converter() {
    while(1) {
        printf("\n----- Metric Area Conversions -----\n");
        printf("\n1. Milimeters² to Centimeters²");
        printf("\n2. Centimeters² to Milimeters²");
        printf("\n3. Centimeters² to Meters²");
        printf("\n4. Meters² to Centimeters²");
        printf("\n5. Meters² to Hectares");
        printf("\n6. Hectares to Meters²");
        printf("\n7. Meters² to Kilometers²");
        printf("\n8. Kilometers² to Meters²");
        printf("\n9. Back to Main Menu\n");
        printf("\nChoose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 9) {
            break;
        }
        char log[200];
        switch (choice) {
            case 1:
                double mm2;
                printf("\nEnter Milimeters²: ");
                scanf("%lf", &mm2);
                printf("\n%.2lf mm² = %.2lf cm²\n", mm2, mm2 / 100);
                sprintf(log, "AREA: %.2lf mm² -> %.2lf cm²", mm2, mm2 / 100);
                save_history(log);
                break;
            case 2:
                double cm2;
                printf("\nEnter Centimeters²: ");
                scanf("%lf", &cm2);
                printf("\n%.2lf cm² = %.2lf mm²\n", cm2, cm2 * 100);
                sprintf(log, "AREA: %.2lf cm² -> %.2lf mm²", cm2, cm2 * 100);
                save_history(log);
                break;
            case 3:
                printf("\nEnter Centimeters²: ");
                scanf("%lf", &cm2);
                printf("\n%.2lf cm² = %.6lf m²\n", cm2, cm2 / 10000);
                sprintf(log, "AREA: %.2lf cm² -> %.6lf m²", cm2, cm2 / 10000);
                save_history(log);
                break;
            case 4:
                double m2;
                printf("\nEnter Meters²: ");
                scanf("%lf", &m2);
                printf("\n%.2lf m² = %.2lf cm²\n", m2, m2 * 10000);
                sprintf(log, "AREA: %.2lf m² -> %.2lf cm²", m2, m2 * 10000);
                save_history(log);
                break;
            case 5:
                printf("\nEnter Meters²: ");
                scanf("%lf", &m2);
                printf("\n%.2lf m² = %.6lf Hectares\n", m2, m2 / 10000);
                sprintf(log, "AREA: %.2lf m² -> %.6lf Hectares", m2, m2 / 10000);
                save_history(log);
                break;
            case 6:
                double hectares;
                printf("\nEnter Hectares: ");
                scanf("%lf", &hectares);
                printf("\n%.2lf Hectares = %.2lf m²\n", hectares, hectares * 10000);
                sprintf(log, "AREA: %.2lf Hectares -> %.2lf m²", hectares, hectares * 10000);
                save_history(log);
                break;
            case 7:
                printf("\nEnter Meters²: ");
                scanf("%lf", &m2);
                printf("\n%.2lf m² = %.6lf km²\n", m2, m2 / 1000000);
                sprintf(log, "AREA: %.2lf m² -> %.6lf km²", m2, m2 / 1000000);
                save_history(log);
                break;
            case 8:
                double km2;
                printf("\nEnter Kilometers²: ");
                scanf("%lf", &km2);
                printf("\n%.2lf km² = %.2lf m²\n", km2, km2 * 1000000);
                sprintf(log, "AREA: %.2lf km² -> %.2lf m²", km2, km2 * 1000000);
                save_history(log);
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
}

// Imperial Area Conversions
void imperial_area_converter() {
    while(1) {
        printf("\n----- Imperial Area Conversions -----\n");
        printf("\n1. Square Inches to Square Feet");
        printf("\n2. Square Feet to Square Inches");
        printf("\n3. Square Feet to Square Yards");
        printf("\n4. Square Yards to Square Feet");
        printf("\n5. Square Yards to Acres");
        printf("\n6. Acres to Square Yards");
        printf("\n7. Acres to Square Miles");
        printf("\n8. Square Miles to Acres");
        printf("\n9. Back to Main Menu\n");
        printf("\nChoose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 9) {
            break;
        }
        char log[200];
        switch (choice) {
            case 1:
                double in2;
                printf("\nEnter Square Inches: ");
                scanf("%lf", &in2);
                printf("\n%.2lf in² = %.4lf ft²\n", in2, in2 / 144);
                sprintf(log, "AREA: %.2lf in² -> %.4lf ft²", in2, in2 / 144);
                save_history(log);
                break;
            case 2:
                double ft2;
                printf("\nEnter Square Feet: ");
                scanf("%lf", &ft2);
                printf("\n%.2lf ft² = %.2lf in²\n", ft2, ft2 * 144);
                sprintf(log, "AREA: %.2lf ft² -> %.2lf in²", ft2, ft2 * 144);
                save_history(log);
                break;
            case 3:
                printf("\nEnter Square Feet: ");
                scanf("%lf", &ft2);
                printf("\n%.2lf ft² = %.4lf yd²\n", ft2, ft2 / 9);
                sprintf(log, "AREA: %.2lf ft² -> %.4lf yd²", ft2, ft2 / 9);
                save_history(log);
                break;
            case 4:
                double yd2;
                printf("\nEnter Square Yards: ");
                scanf("%lf", &yd2);
                printf("\n%.2lf yd² = %.2lf ft²\n", yd2, yd2 * 9);
                sprintf(log, "AREA: %.2lf yd² -> %.2lf ft²", yd2, yd2 * 9);
                save_history(log);
                break;
            case 5:
                printf("\nEnter Square Yards: ");
                scanf("%lf", &yd2);
                printf("\n%.2lf yd² = %.6lf Acres\n", yd2, yd2 / 4840);
                sprintf(log, "AREA: %.2lf yd² -> %.6lf Acres", yd2, yd2 / 4840);
                save_history(log);
                break;
            case 6:
                double acres;
                printf("\nEnter Acres: ");
                scanf("%lf", &acres);
                printf("\n%.2lf Acres = %.2lf yd²\n", acres, acres * 4840);
                sprintf(log, "AREA: %.2lf Acres -> %.2lf yd²", acres, acres * 4840);
                save_history(log);
                break;
            case 7:
                printf("\nEnter Acres: ");
                scanf("%lf", &acres);
                printf("\n%.2lf Acres = %.6lf mi²\n", acres, acres / 640);
                sprintf(log, "AREA: %.2lf Acres -> %.6lf mi²", acres, acres / 640);
                save_history(log);
                break;
            case 8:
                double mi2;
                printf("\nEnter Square Miles: ");
                scanf("%lf", &mi2);
                printf("\n%.2lf mi² = %.2lf Acres\n", mi2, mi2 * 640);
                sprintf(log, "AREA: %.2lf mi² -> %.2lf Acres", mi2, mi2 * 640);
                save_history(log);
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
}

// Global Area Conversions
void global_area_converter() {
    while(1) {
        printf("\n===== Area Conversions =====\n");
        printf("\n1. Meter Square (m²) to Foot Square (ft²)");
        printf("\n2. Foot Square (ft²) to Meter Square (m²)");
        printf("\n3. Acre to Hectare");
        printf("\n4. Hectare to Acre");
        printf("\n5. Kilometer Square (km²) to Mile Square (mi²)");
        printf("\n6. Mile Square (mi²) to Kilometer Square (km²)");
        printf("\n7. Back to Main Menu\n");
        printf("\nChoose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 7) {
            break;
        }
        char log[200];
        switch (choice) {
            case 1:
                double m2;
                printf("\nEnter Meter Square (m²): ");
                scanf("%lf", &m2);
                printf("\n%.2lf m² = %.4lf ft²\n", m2, m2 * 10.7639);
                sprintf(log, "AREA: %.2lf m² -> %.4lf ft²", m2, m2 * 10.7639);
                save_history(log);
                break;
            case 2:
                double ft2;
                printf("\nEnter Foot Square (ft²): ");
                scanf("%lf", &ft2);
                printf("\n%.2lf ft² = %.4lf m²\n", ft2, ft2 / 10.7639);
                sprintf(log, "AREA: %.2lf ft² -> %.4lf m²", ft2, ft2 / 10.7639);
                save_history(log);
                break;
            case 3:
                double acres;
                printf("\nEnter Acre: ");
                scanf("%lf", &acres);
                printf("\n%.2lf Acres = %.4lf Hectares\n", acres, acres * 0.404686);
                sprintf(log, "AREA: %.2lf Acres -> %.4lf Hectares", acres, acres * 0.404686);
                save_history(log);
                break;
            case 4:
                double hectares;
                printf("\nEnter Hectare: ");
                scanf("%lf", &hectares);
                printf("\n%.2lf Hectares = %.4lf Acres\n", hectares, hectares / 0.404686);
                sprintf(log, "AREA: %.2lf Hectares -> %.4lf Acres", hectares, hectares / 0.404686);
                save_history(log);
                break;
            case 5:
                double km2;
                printf("\nEnter Kilometer Square (km²): ");
                scanf("%lf", &km2);
                printf("\n%.2lf km² = %.4lf mi²\n", km2, km2 * 0.386102);
                sprintf(log, "AREA: %.2lf km² -> %.4lf mi²", km2, km2 * 0.386102);
                save_history(log);
                break;
            case 6:
                double mi2;
                printf("\nEnter Mile Square (mi²): ");
                scanf("%lf", &mi2);
                printf("\n%.2lf mi² = %.4lf km²\n", mi2, mi2 / 0.386102);
                sprintf(log, "AREA: %.2lf mi² -> %.4lf km²", mi2, mi2 / 0.386102);
                save_history(log);
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
}

//================= Pressure =================

// Pascal to kilopascal
void pascal_to_kilopascal() {
    double pascal;
    printf("\nEnter Pressure in Pascal: ");
    scanf("%lf", &pascal);
    printf("\n%.2lf Pa = %.6lf kPa\n", pascal, pascal / 1000);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf Pa -> %.6lf kPa", pascal, pascal / 1000);
    save_history(log);
}

// kilopascal to Pascal
void kilopascal_to_pascal() {
    double kilopascal;
    printf("\nEnter Pressure in Kilopascal: ");
    scanf("%lf", &kilopascal);
    printf("\n%.2lf kPa = %.2lf Pa\n", kilopascal, kilopascal * 1000);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf kPa -> %.2lf Pa", kilopascal, kilopascal * 1000);
    save_history(log);
}

// kilopascal to megapascal
void kilopascal_to_megapascal() {
    double kilopascal;
    printf("\nEnter Pressure in Kilopascal: ");
    scanf("%lf", &kilopascal);
    printf("\n%.2lf kPa = %.6lf MPa\n", kilopascal, kilopascal / 1000);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf kPa -> %.6lf MPa", kilopascal, kilopascal / 1000);
    save_history(log);
}

// megapascal to kilopascal
void megapascal_to_kilopascal() {
    double megapascal;
    printf("\nEnter Pressure in Megapascal: ");
    scanf("%lf", &megapascal);
    printf("\n%.2lf MPa = %.2lf kPa\n", megapascal, megapascal * 1000);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf MPa -> %.2lf kPa", megapascal, megapascal * 1000);
    save_history(log);
}

// kilopascal to bar
void kilopascal_to_bar() {
    double kilopascal;
    printf("\nEnter Pressure in Kilopascal: ");
    scanf("%lf", &kilopascal);
    printf("\n%.2lf kPa = %.6lf bar\n", kilopascal, kilopascal / 100);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf kPa -> %.6lf bar", kilopascal, kilopascal / 100);
    save_history(log);
}

// bar to kilopascal
void bar_to_kilopascal() {
    double bar;
    printf("\nEnter Pressure in Bar: ");
    scanf("%lf", &bar);
    printf("\n%.2lf bar = %.2lf kPa\n", bar, bar * 100);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf bar -> %.2lf kPa", bar, bar * 100);
    save_history(log);
}

// bar to atmosphere
void bar_to_atmosphere() {
    double bar;
    printf("\nEnter Pressure in Bar: ");
    scanf("%lf", &bar);
    printf("\n%.2lf bar = %.6lf atm\n", bar, bar / 1.01325);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf bar -> %.6lf atm", bar, bar / 1.01325);
    save_history(log);
}

// atmosphere to bar
void atmosphere_to_bar() {
    double atmosphere;
    printf("\nEnter Pressure in Atmosphere: ");
    scanf("%lf", &atmosphere);
    printf("\n%.2lf atm = %.2lf bar\n", atmosphere, atmosphere * 1.01325);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf atm -> %.2lf bar", atmosphere, atmosphere * 1.01325);
    save_history(log);
}

// atmosphere to mmHg
void atmosphere_to_mmhg() {
    double atmosphere;
    printf("\nEnter Pressure in Atmosphere: ");
    scanf("%lf", &atmosphere);
    printf("\n%.2lf atm = %.2lf mmHg\n", atmosphere, atmosphere * 760);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf atm -> %.2lf mmHg", atmosphere, atmosphere * 760);
    save_history(log);
}

// mmHg to atmosphere
void mmhg_to_atmosphere() {
    double mmhg;
    printf("\nEnter Pressure in mmHg: ");
    scanf("%lf", &mmhg);
    printf("\n%.2lf mmHg = %.6lf atm\n", mmhg, mmhg / 760);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf mmHg -> %.6lf atm", mmhg, mmhg / 760);
    save_history(log);
}

// psi to kilopascal
void psi_to_kilopascal() {
    double psi;
    printf("\nEnter Pressure in PSI: ");
    scanf("%lf", &psi);
    printf("\n%.2lf PSI = %.6lf kPa\n", psi, psi * 6.89476);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf PSI -> %.6lf kPa", psi, psi * 6.89476);
    save_history(log);
}

// kilopascal to psi
void kilopascal_to_psi() {
    double kilopascal;
    printf("\nEnter Pressure in Kilopascal: ");
    scanf("%lf", &kilopascal);
    printf("\n%.2lf kPa = %.2lf PSI\n", kilopascal, kilopascal / 6.89476);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf kPa -> %.2lf PSI", kilopascal, kilopascal / 6.89476);
    save_history(log);
}

// psi to bar
void psi_to_bar() {
    double psi;
    printf("\nEnter Pressure in PSI: ");
    scanf("%lf", &psi);
    printf("\n%.2lf PSI = %.6lf bar\n", psi, psi / 14.5038);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf PSI -> %.6lf bar", psi, psi / 14.5038);
    save_history(log);
}

// bar to psi
void bar_to_psi() {
    double bar;
    printf("\nEnter Pressure in Bar: ");
    scanf("%lf", &bar);
    printf("\n%.2lf bar = %.2lf PSI\n", bar, bar * 14.5038);
    char log[200];
    sprintf(log, "PRESSURE: %.2lf bar -> %.2lf PSI", bar, bar * 14.5038);
    save_history(log);
}

// =================== Power =================

// Watt to Kilowatt
void watt_to_kwatt() {
    double watt;
    printf("\nEnter Power in Watt: ");
    scanf("%lf", &watt);
    printf("\n%.2lf W = %.6lf kW\n", watt, watt / 1000);
    char log[200];
    sprintf(log, "POWER: %.2lf W -> %.6lf kW", watt, watt / 1000);
    save_history(log);
}

// Kilowatt to Watt
void kwatt_to_watt() {
    double kilowatt;
    printf("\nEnter Power in Kilowatt: ");
    scanf("%lf", &kilowatt);
    printf("\n%.2lf kW = %.2lf W\n", kilowatt, kilowatt * 1000);
    char log[200];
    sprintf(log, "POWER: %.2lf kW -> %.2lf W", kilowatt, kilowatt * 1000);
    save_history(log);
}

// kilowatt to Megawatt
void kwatt_to_mwatt() {
    double kilowatt;
    printf("\nEnter Power in Kilowatt: ");
    scanf("%lf", &kilowatt);
    printf("\n%.2lf kW = %.6lf MW\n", kilowatt, kilowatt / 1000);
    char log[200];
    sprintf(log, "POWER: %.2lf kW -> %.6lf MW", kilowatt, kilowatt / 1000);
    save_history(log);
}

// Megawatt to Kilowatt
void mwatt_to_kwatt() {
    double megawatt;
    printf("\nEnter Power in Megawatt: ");
    scanf("%lf", &megawatt);
    printf("\n%.2lf MW = %.2lf kW\n", megawatt, megawatt * 1000);
    char log[200];
    sprintf(log, "POWER: %.2lf MW -> %.2lf kW", megawatt, megawatt * 1000);
    save_history(log);
}

// megawatt to Gigawatt
void mwatt_to_gwatt() {
    double megawatt;
    printf("\nEnter Power in Megawatt: ");
    scanf("%lf", &megawatt);
    printf("\n%.2lf MW = %.6lf GW\n", megawatt, megawatt / 1000);
    char log[200];
    sprintf(log, "POWER: %.2lf MW -> %.6lf GW", megawatt, megawatt / 1000);
    save_history(log);
}

// Gigawatt to Megawatt
void gwatt_to_mwatt() {
    double gigawatt;
    printf("\nEnter Power in Gigawatt: ");
    scanf("%lf", &gigawatt);
    printf("\n%.2lf GW = %.2lf MW\n", gigawatt, gigawatt * 1000);
    char log[200];
    sprintf(log, "POWER: %.2lf GW -> %.2lf MW", gigawatt, gigawatt * 1000);
    save_history(log);
}

// kilowatt to Horsepower
void kwatt_to_hp() {
    double kilowatt;
    printf("\nEnter Power in Kilowatt: ");
    scanf("%lf", &kilowatt);
    printf("\n%.2lf kW = %.6lf HP\n", kilowatt, kilowatt * 1.34102);
    char log[200];
    sprintf(log, "POWER: %.2lf kW -> %.6lf HP", kilowatt, kilowatt * 1.34102);
    save_history(log);
}

// Horsepower to Kilowatt
void hp_to_kwatt() {
    double horsepower;
    printf("\nEnter Power in Horsepower: ");
    scanf("%lf", &horsepower);
    printf("\n%.2lf HP = %.2lf kW\n", horsepower, horsepower / 1.34102);
    char log[200];
    sprintf(log, "POWER: %.2lf HP -> %.2lf kW", horsepower, horsepower / 1.34102);
    save_history(log);
}

// watt to Horsepower
void watt_to_hp() {
    double watt;
    printf("\nEnter Power in Watt: ");
    scanf("%lf", &watt);
    printf("\n%.2lf W = %.6lf HP\n", watt, watt * 0.00134102);
    char log[200];
    sprintf(log, "POWER: %.2lf W -> %.6lf HP", watt, watt * 0.00134102);
    save_history(log);
}

// Horsepower to Watt
void hp_to_watt() {
    double horsepower;
    printf("\nEnter Power in Horsepower: ");
    scanf("%lf", &horsepower);
    printf("\n%.2lf HP = %.2lf W\n", horsepower, horsepower / 0.00134102);
    char log[200];
    sprintf(log, "POWER: %.2lf HP -> %.2lf W", horsepower, horsepower / 0.00134102);
    save_history(log);
}

// watt to BTU per hour
void watt_to_btu_per_hour() {
    double watt;
    printf("\nEnter Power in Watt: ");
    scanf("%lf", &watt);
    printf("\n%.2lf W = %.6lf BTU/hr\n", watt, watt * 3.41214);
    char log[200];
    sprintf(log, "POWER: %.2lf W -> %.6lf BTU/hr", watt, watt * 3.41214);
    save_history(log);
}

// BTU per hour to watt
void btu_per_hour_to_watt() {
    double btu_per_hour;
    printf("\nEnter Power in BTU per hour: ");
    scanf("%lf", &btu_per_hour);
    printf("\n%.2lf BTU/hr = %.2lf W\n", btu_per_hour, btu_per_hour / 3.41214);
    char log[200];
    sprintf(log, "POWER: %.2lf BTU/hr -> %.2lf W", btu_per_hour, btu_per_hour / 3.41214);
    save_history(log);
}

// ================= NUMBER SYSTEM CONVERSIONS =================

// Decimal to Binary
void dec_to_binary() {
    int n, bin[32], i=0, original;
    printf("\nEnter Decimal: ");
    scanf("%d",&n);
    original = n;

    while(n>0){ 
        bin[i++]=n%2; 
        n/=2; 
    }

    printf("\nBinary = ");
    char log[300];
    sprintf(log, "DEC->BIN: %d -> ", original);

    for(int j=i-1;j>=0;j--) {
        printf("%d",bin[j]);
        char t[5];
        sprintf(t, "%d", bin[j]);
        strcat(log, t);
    }
    printf("\n");

    save_history(log);
}

// Decimal to Octal
void dec_to_octal() {
    int n;
    printf("\nEnter Decimal: ");
    scanf("%d",&n);

    printf("Octal = %o\n",n);

    char log[200];
    sprintf(log, "DEC->OCT: %d -> %o", n, n);
    save_history(log);
}

// Decimal to Hexadecimal
void dec_to_hex() {
    int n;
    printf("\nEnter Decimal: ");
    scanf("%d",&n);

    printf("Hex = %X\n",n);

    char log[200];
    sprintf(log, "DEC->HEX: %d -> %X", n, n);
    save_history(log);
}

// Binary to Decimal
void binary_to_dec() {
    long long n;
    printf("\nEnter Binary: ");
    scanf("%lld",&n);

    int dec = 0, base = 1, temp = n;
    while(temp) {
        int last_digit = temp % 10;
        dec += last_digit * base;
        base *= 2;
        temp /= 10;
    }

    printf("Decimal = %d\n",dec);

    char log[200];
    sprintf(log, "BIN->DEC: %lld -> %d", n, dec);
    save_history(log);
}

// Octal to Decimal
void octal_to_dec() {
    int n;
    printf("\nEnter Octal: ");
    scanf("%o",&n);

    printf("Decimal = %d\n",n);

    char log[200];
    sprintf(log, "OCT->DEC: %o -> %d", n, n);
    save_history(log);
}

// Hexadecimal to Decimal
void hex_to_dec() {
    int n;
    printf("\nEnter Hexadecimal: ");
    scanf("%x",&n);

    printf("Decimal = %d\n",n);

    char log[200];
    sprintf(log, "HEX->DEC: %X -> %d", n, n);
    save_history(log);
}

// Binary to Octal
void binary_to_octal() {
    long long n;
    printf("\nEnter Binary: ");
    scanf("%lld",&n);

    int dec = 0, base = 1, temp = n;
    while(temp) {
        int last_digit = temp % 10;
        dec += last_digit * base;
        base *= 2;
        temp /= 10;
    }

    printf("Octal = %o\n",dec);

    char log[200];
    sprintf(log, "BIN->OCT: %lld -> %o", n, dec);
    save_history(log);
}

// Octal to Binary
void octal_to_binary() {
    int n;
    printf("\nEnter Octal: ");
    scanf("%o",&n);

    int bin[32], i=0, original = n;
    while(n>0){ 
        bin[i++]=n%2; 
        n/=2; 
    }

    printf("Binary = ");
    char log[300];
    sprintf(log, "OCT->BIN: %o -> ", original);
    for(int j=i-1;j>=0;j--) {
        printf("%d",bin[j]);
        char t[5];
        sprintf(t, "%d", bin[j]);
        strcat(log, t);
    }
    printf("\n");
    save_history(log);
}

// Binary to Hexadecimal
void binary_to_hex() {
    long long n;
    printf("\nEnter Binary: ");
    scanf("%lld",&n);

    int dec = 0, base = 1, temp = n;
    while(temp) {
        int last_digit = temp % 10;
        dec += last_digit * base;
        base *= 2;
        temp /= 10;
    }

    printf("Hexadecimal = %X\n",dec);

    char log[200];
    sprintf(log, "BIN->HEX: %lld -> %X", n, dec);
    save_history(log);
}

// Hexadecimal to Binary
void hex_to_binary() {
    int n;
    printf("\nEnter Hexadecimal: ");
    scanf("%x",&n);

    int bin[32], i=0, original = n;
    while(n>0){ 
        bin[i++]=n%2; 
        n/=2; 
    }

    printf("Binary = ");
    char log[300];
    sprintf(log, "HEX->BIN: %X -> ", original);
    for(int j=i-1;j>=0;j--) {
        printf("%d",bin[j]);
        char t[5];
        sprintf(t, "%d", bin[j]);
        strcat(log, t);
    }
    printf("\n");
    save_history(log);
}

// Octal to Hexadecimal
void octal_to_hex() {
    int n;
    printf("\nEnter Octal: ");
    scanf("%o", &n);  
    
    printf("Hexadecimal = %X\n", n);  
    
    char log[200];
    sprintf(log, "OCT->HEX: %o -> %X", n, n);
    save_history(log);
}

// Hexadecimal to Octal
void hex_to_octal() {
    int n;
    printf("\nEnter Hexadecimal: ");
    scanf("%x", &n);  
    
    printf("Octal = %o\n", n);  
    
    char log[200];
    sprintf(log, "HEX->OCT: %X -> %o", n, n);
    save_history(log);
}
