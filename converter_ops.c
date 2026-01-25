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
