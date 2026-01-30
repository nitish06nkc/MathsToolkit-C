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
