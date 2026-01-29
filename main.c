/*
=========================================================
Project Title : Menu Based Maths Toolkit
Developer     : Nitish Kumar Chaudhary
Course         : B.Tech Computer Science & Engineering
Project Type   : Project (C Programming)
Description    : A menu-driven toolkit including calculator,
                 converters, patterns, statistics, finance
                 tools and history logging system.
Date           : 25-01-2026
=========================================================
*/
// Standard library imports
#include <stdio.h>
#include <string.h>

// Import all module headers
#include "basic_ops.h"
#include "scientific_ops.h"
#include "number_ops.h"
#include "matrix_ops.h"
#include "stats_ops.h"
#include "financial_ops.h"
#include "converter_ops.h"
#include "realworld_ops.h"
#include "pattern_ops.h"
#include "history_ops.h"

int main() {
    char name[100];      // Store user's name
    int choice;          // Main menu choice variable

    printf("Enter your Name: ");
    fgets(name, 100, stdin);                 // Read full name (supports spaces)
    name[strcspn(name, "\n")] = 0;           // Remove newline from fgets

    // Main program banner
    printf("\n==============================================\n");
    printf("        Menu Based Maths Toolkit\n");
    printf("                By - NKC\n");
    printf("==============================================\n");
    printf("Welcome, %s!\n", name);

    // Infinite loop for menu-driven program
    while(1) {
        // Main menu options
        printf("\n1. Basic Calculator");
        printf("\n2. Scientific Calculator");
        printf("\n3. Number Operation's");
        printf("\n4. Matrix & Determinants");
        printf("\n5. Statistics Operation's");
        printf("\n6. Finance Kit");
        printf("\n7. Conversion System");
        printf("\n8. Real World Utilities");
        printf("\n9. Patterns(Star + Number)");
        printf("\n10. History");
        printf("\n11. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);     // Read user menu choice

        // Exit option
        if(choice == 11){
            printf("\n%s , Thanks for using this Amazing Maths Tookit!!!\n", name);
            printf("                  Come back Again!!!!\n");
            return 0;              // End program
        }

        // Main menu switch controller
        switch(choice) {

            case 1: {
                int op, n;

                while(1) {   // ===== BASIC CALCULATOR =====
                    printf("\n--- BASIC CALCULATOR ---");
                    printf("\n1. Add");
                    printf("\n2. Subtract");
                    printf("\n3. Multiply");
                    printf("\n4. Divide");
                    printf("\n5. Back\n");

                    printf("\nEnter operation: ");
                    scanf("%d", &op);

                    if(op == 5) break;   // Goes back to Main Menu

                    printf("\nHow many numbers: ");
                    scanf("%d", &n);

                    if(n <= 0) {
                        printf("Enter at least 1 number!\n");
                        continue;
                    }

                    if(op == 1) printf("Result = %d\n", add(n));
                    else if(op == 2) printf("Result = %d\n", subtract(n));
                    else if(op == 3) printf("Result = %d\n", multiply(n));
                    else if(op == 4) printf("Result = %.2f\n", divide(n));
                    else printf("Invalid operation!\n");
                }

                break;
            }

            case 2: {   // ===== SCIENTIFIC CALCULATOR MENU =====
                int sop;   // Scientific operation choice

                while(1) {   // Loop for scientific sub-menu
                    printf("\n--- SCIENTIFIC CALCULATOR ---");
                    printf("\n1. Power (a^b)");
                    printf("\n2. Square Root");
                    printf("\n3. Cube Root");
                    printf("\n4. Log10");
                    printf("\n5. Log with any Base");
                    printf("\n6. Natural Log (ln)");
                    printf("\n7. nth Root");
                    printf("\n8. Modulus");
                    printf("\n9. Trigonometry");
                    printf("\n10. Degree & Radian Converter");
                    printf("\n11. Quadratic Equation Root Finder");
                    printf("\n12. Permutation & Combination");
                    printf("\n13. Back");

                    printf("\n\nEnter choice: ");
                    scanf("%d", &sop);

                    if(sop == 13) break;   // Exit scientific menu

                    switch(sop) {

                        case 1: {   // Power calculation
                            double a, b;

                            printf("\nEnter base (a): ");
                            scanf("%lf", &a);

                            printf("Enter exponent (b): ");
                            scanf("%lf", &b);

                            double result = power_calc(a, b);
                            printf("\nResult = %.4lf\n", result);

                            break;
                        }

                        case 2: {   // Square root
                            double x;
                            printf("\nEnter number: ");
                            scanf("%lf", &x);

                            if(x < 0) {
                                printf("\nSquare root of negative number is not real!\n");
                            } else {
                                double result = square_root(x);
                                printf("\nResult = %.4lf\n", result);
                            }
                            break;
                        }

                        case 3: {   // Cube root
                            double x;
                            printf("\nEnter number: ");
                            scanf("%lf", &x);

                            double result = cube_root(x);
                            printf("\nResult = %.4lf\n", result);
                            break;
                        }

                        case 4: {   // Log base 10
                            double x;
                            printf("\nEnter number: ");
                            scanf("%lf", &x);

                            if(x <= 0) {
                                printf("\nLog10 undefined for x <= 0\n");
                            } else {
                                double result = log10_calc(x);
                                printf("\nResult = %.4lf\n", result);
                            }
                            break;
                        }

                        case 5: {   // Log with any base
                            double x, base;
                            printf("\nEnter number: ");
                            scanf("%lf", &x);
                            printf("Enter base: ");
                            scanf("%lf", &base);

                            if(base <= 0 || base == 1 || x <= 0) {
                                printf("\nLog undefined for x <= 0 or base <= 0 or base == 1\n");
                            } else {
                                double result = log_base_calc(x, base);
                                printf("\nResult = %.4lf\n", result);
                            }
                            break;
                        }

                        case 6: {   // Natural logarithm
                            double x;
                            printf("\nEnter number: ");
                            scanf("%lf", &x);

                            if(x <= 0) {
                                printf("\nNatural log undefined for x <= 0\n");
                            } else {
                                double result = ln_calc(x);
                                printf("\nResult = %.4lf\n", result);
                            }
                            break;
                        }

                        case 7: {   // nth root calculation
                            double x, n;
                            printf("\nEnter number: ");
                            scanf("%lf", &x);
                            printf("Enter root (n): ");
                            scanf("%lf", &n);

                            if(n == 0) {
                                printf("\nRoot cannot be zero\n");
                            } else {
                                double result = nth_root_calc(x, n);
                                printf("\nResult = %.4lf\n", result);
                            }
                            break;
                        }

                        case 8: {   // Modulus operation
                            int a, b;
                            printf("\nEnter first number: ");
                            scanf("%d", &a);
                            printf("Enter second number: ");
                            scanf("%d", &b);

                            if(b == 0) {
                                printf("\nModulus by zero not allowed\n");
                            } else {
                                int r = modulus_calc(a, b);
                                printf("\nResult = %d\n", r);
                            }
                            break;
                        }

                        case 9: {   // Trigonometry submenu
                            trig_menu();
                            break;
                        }

                        case 10: {   // Degree ↔ Radian conversion
                            int ch;
                            double deg, rad;

                            while(1) {
                                printf("\n1. Degree -> Radian");
                                printf("\n2. Radian -> Degree");
                                printf("\n3. Back\n");

                                printf("\nEnter choice: ");
                                scanf("%d", &ch);

                                if(ch == 3) break;

                                if(ch == 1) {
                                    printf("\nEnter degree: ");
                                    scanf("%lf", &deg);
                                    rad = deg_to_rad(deg);
                                    printf("\nRadian = %.6lf\n", rad);
                                }
                                else if(ch == 2) {
                                    printf("\nEnter radian: ");
                                    scanf("%lf", &rad);
                                    deg = rad_to_deg(rad);
                                    printf("\nDegree = %.6lf\n", deg);
                                }
                                else {
                                    printf("\nInvalid choice\n");
                                }
                            }
                            break;
                        }

                        case 11: {   // Quadratic equation solver
                            double a, b, c;
                            printf("\nEnter a: ");
                            scanf("%lf", &a);
                            printf("Enter b: ");
                            scanf("%lf", &b);
                            printf("Enter c: ");
                            scanf("%lf", &c);

                            if(a == 0) {
                                printf("\nNot a quadratic equation\n");
                            } else {
                                quadratic_roots(a, b, c);
                            }
                            break;
                        }

                        case 12: {  // Permutation & Combination
                            int ch;
                            int n, r;

                            while(1) {
                                printf("\n1. Permutation (nPr)");
                                printf("\n2. Combination (nCr)");
                                printf("\n3. Back\n");

                                printf("\nEnter choice: ");
                                scanf("%d", &ch);

                                if(ch == 3) break;

                                printf("\nEnter n: ");
                                scanf("%d", &n);
                                printf("Enter r: ");
                                scanf("%d", &r);

                                if(r > n || n < 0 || r < 0) {
                                    printf("\nInvalid input\n");
                                }
                                else if(ch == 1) {
                                    long long p = permutation(n, r);
                                    printf("\nResult = %lld\n", p);
                                }
                                else if(ch == 2) {
                                    long long c = combination(n, r);
                                    printf("\nResult = %lld\n", c);
                                }
                                else {
                                    printf("\nInvalid choice\n");
                                }
                            }
                            break;
                        }

                        default:
                            printf("\nInvalid choice!\n");
                            break;
                    }
                }
                break;   // Exit scientific calculator case
            }

            case 3: {   // ===== NUMBER OPERATIONS MENU =====
                int nop;   // Number operation choice

                while(1) {   // Loop for number operations submenu
                    printf("\n--- NUMBER OPERATIONS ---");
                    printf("\n1. Prime Check");
                    printf("\n2. Generate Prime Numbers Till N");
                    printf("\n3. GCD & LCM");
                    printf("\n4. Reverse Number");
                    printf("\n5. Palindrome Check");
                    printf("\n6. Armstrong Number");
                    printf("\n7. Sum of Digits");
                    printf("\n8. Count Digits");
                    printf("\n9. Factorial");
                    printf("\n10. Fibonacci Series");
                    printf("\n11. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&nop);

                    if(nop==11) break;   // Exit number operations menu

                    switch(nop) {

                        case 1: {   // Prime number check
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);

                            if(is_prime(n))
                                printf("\nPrime Number\n");
                            else
                                printf("\nNot Prime\n");
                            break;
                        }

                        case 2: {   // Generate prime numbers till N
                            int n;
                            printf("\nGenerate primes till: ");
                            scanf("%d",&n);
                            generate_primes(n);
                            break;
                        }

                        case 3: {   // GCD and LCM calculation
                            int a,b;
                            printf("\nEnter a: ");
                            scanf("%d",&a);
                            printf("Enter b: ");
                            scanf("%d",&b);

                            printf("\nGCD = %d\n", gcd(a,b));
                            printf("\nLCM = %d\n", lcm(a,b));
                            break;
                        }

                        case 4: {   // Reverse a number
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);
                            printf("\nReverse = %d\n", reverse_number(n));
                            break;
                        }

                        case 5: {   // Palindrome check
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);

                            if(is_palindrome(n))
                                printf("\nPalindrome\n");
                            else
                                printf("\nNot Palindrome\n");
                            break;
                        }

                        case 6: {   // Armstrong number check
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);

                            if(is_armstrong(n))
                                printf("\nArmstrong Number\n");
                            else
                                printf("\nNot Armstrong\n");
                            break;
                        }

                        case 7: {   // Sum of digits
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);
                            printf("\nSum of digits = %d\n", sum_digits(n));
                            break;
                        }

                        case 8: {   // Count digits in number
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);
                            printf("\nDigits = %d\n", count_digits(n));
                            break;
                        }

                        case 9: {   // Factorial calculation
                            int n;
                            printf("\nEnter number: ");
                            scanf("%d",&n);
                            printf("\nFactorial = %lld\n", factorial_num(n));
                            break;
                        }

                        case 10: {  // Fibonacci series
                            int n;
                            printf("\nEnter terms: ");
                            scanf("%d",&n);
                            fibonacci(n);
                            break;
                        }

                        default:
                            printf("\nInvalid choice\n");   // Invalid menu input
                    }
                }
                break;   // Exit number operations case
            }

            case 4: {   // ===== MATRIX OPERATIONS MENU =====
                int mop;   // Matrix operation choice

                while(1) {   // Loop for matrix submenu
                    printf("\n--- MATRICES ---");
                    printf("\n1. Matrix Addition");
                    printf("\n2. Matrix Subtraction");
                    printf("\n3. Matrix Multiplication");
                    printf("\n4. Matrix Transpose");
                    printf("\n5. Symmetric Matrix Check");
                    printf("\n6. Skew-Symmetric Matrix Check");
                    printf("\n7. Determinants(Coming Soon!!!)");
                    printf("\n8. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&mop);

                    if(mop==7){   // Placeholder for future feature
                        printf("\nComing Soon!!!");
                        printf("Try Another Features in Mean Time.\n");
                        break;
                    }
                    if(mop==8) break;   // Exit matrix menu

                    switch(mop) {
                        case 1: matrix_add(); break;        // Matrix addition
                        case 2: matrix_subtract(); break;   // Matrix subtraction
                        case 3: matrix_multiply(); break;   // Matrix multiplication
                        case 4: matrix_transpose(); break;  // Matrix transpose
                        case 5: symmetric_matrix(); break;    // Symmetric matrix check
                        case 6: skew_symmetric_matrix(); break; // Skew-symmetric check
                        default: printf("\nInvalid choice\n");
                    }
                }
                break;   // Exit matrix case
            }

            case 5: {   // ===== STATISTICS MENU =====
                int sop;   // Statistics option

                while(1) {   // Loop for statistics submenu
                    printf("\n--- STATISTICS TOOLS ---");
                    printf("\n1. Mean");
                    printf("\n2. Median");
                    printf("\n3. Mode");
                    printf("\n4. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&sop);

                    if(sop==4) break;   // Exit statistics menu

                    switch(sop) {
                        case 1: mean_calc(); break;     // Mean calculation
                        case 2: median_calc(); break;   // Median calculation
                        case 3: mode_calc(); break;     // Mode calculation
                        default: printf("\nInvalid choice\n");
                    }
                }
                break;   // Exit statistics case
            }

            case 6: {   // ===== FINANCIAL TOOLS MENU =====
                int fop;   // Finance option

                while(1) {   // Loop for finance submenu
                    printf("\n--- FINANCIAL CALCULATORS ---");
                    printf("\n1. Simple Interest");
                    printf("\n2. Compound Interest");
                    printf("\n3. Currency Exchange Calculator");
                    printf("\n4. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&fop);

                    if(fop==4) break;   // Exit finance menu

                    switch(fop) {
                        case 1: simple_interest(); break;      // Simple interest
                        case 2: compound_interest(); break;    // Compound interest
                        case 3: currency_exchange(); break;    // Currency converter
                        default: printf("\nInvalid choice\n");
                    }
                }
                break;   // Exit finance case
            }

            case 7: {   // ===== CONVERTER MENU =====
                int cop;   // Converter main menu choice

                while(1) {   // Loop for converter main menu
                    printf("\n--- CONVERTERS ---");
                    printf("\n1. Unit Converters");
                    printf("\n2. Number System Converters");
                    printf("\n3. Back\n");
                    printf("\nEnter choice: ");
                    scanf("%d",&cop);

                    if(cop==3) break;   // Exit converter menu

                    // ===== UNIT CONVERTERS MENU =====
                    if(cop==1) {
                        int uop;   // Unit converter category

                        while(1) {   // Loop for unit converter submenu
                            printf("\n--- UNIT CONVERTERS ---");
                            printf("\n1. Temperature");
                            printf("\n2. Length");
                            printf("\n3. Mass");
                            printf("\n4. Volume");
                            printf("\n5. Energy");
                            printf("\n6. Speed");
                            printf("\n7. Data Storage");
                            printf("\n8. Time");
                            printf("\n9. Percentage & Fractions");
                            printf("\n10. Pressure");
                            printf("\n11. Back\n");

                            printf("\nEnter Choice: ");
                            scanf("%d",&uop);

                            if(uop==11) break;   // Exit unit converter menu
                            // ---- Temperature Conversion ----
                            if(uop==1) {
                                while(1){
                                    int t;
                                    printf("\n1. Celcius -> Fahrenheit\n2. Fahrenheit -> Celcius\n3. Celcius -> Kelvin\n4. Kelvin -> Celcius\n5. Fahrenheit -> Kelvin\n6. Kelvin -> Fahrenheit\n7. Back\n");
                                    printf("\nEnter Choice: ");
                                    scanf("%d",&t);
                                    if(t==1) c_to_f();
                                    else if(t==2) f_to_c();
                                    else if(t==3) c_to_k();
                                    else if(t==4) k_to_c();
                                    else if(t==5) f_to_k();
                                    else if(t==6) k_to_f();
                                    else if(t==7) break;
                                }
                            }

                            // ---- Length Conversion ----
                            if(uop==2) {
                                while(1){
                                    int l;
                                    printf("\n1.Kilo Meter -> Meter \n2.Kilo Meter -> Centi Meter \n3.Meter -> Kilo Meter \n4.Meter -> Centi Meter \n5.Centi Meter -> Meter \n6.Inche's -> Centi Meter \n7.Centi Meter -> Inches \n8.Kilo Meter -> Miles \n9.Miles -> Kilo Meter \n10.Meter -> Foot\n11.Foot -> Meter\n12.Back\n");
                                    printf("\nEnter Choice: ");
                                    scanf("%d",&l);
                                    if(l==1) km_to_m();
                                    else if(l==2) km_to_cm();
                                    else if(l==3) m_to_km();
                                    else if(l==4) m_to_cm();
                                    else if(l==5) cm_to_m();
                                    else if(l==6) inch_to_cm();
                                    else if(l==7) cm_to_inch();
                                    else if(l==8) km_to_mile();
                                    else if(l==9) mile_to_km();
                                    else if(l==10) m_to_foot();
                                    else if(l==11) foot_to_m();
                                    else if(l==12) break;
                                }
                            }

                            // ---- Mass Conversion ----
                            if(uop==3) {
                                while(1){
                                    int m;
                                    printf("\n1.Gram -> Kilo Gram \n2.Kilo Gram -> Gram \n3.Gram -> Pound \n4.Pound -> Gram \n5.Back\n");
                                    printf("\nEnter Choice: ");
                                    scanf("%d",&m);
                                    if(m==1) g_to_kg();
                                    else if(m==2) kg_to_g();
                                    else if(m==3) g_to_pound();
                                    else if(m==4) pound_to_g();
                                    else if(m==5) break;
                                }
                            }

                            // ---- Volume Conversion ----
                            if(uop==4) {
                                while(1){
                                    int v;
                                    printf("\n1.Litre -> Mili Litre \n2.Mili Litre -> Litre \n3.Gallon -> Litre \n4.Litre -> Gallon \n5.Fluid Ounce -> Mili Litre \n6.Mili Litre -> Fluid Ounce \n7.Pint -> Litre \n8.Litre -> Pint \n9.Cubic Meter -> Litre \n10.Litre -> Cubic Meter \n11.Cubic Centi Meter(cc) -> Mili Litre \n12.Mili Litre -> Cubic Centi Meter(cc) \n13.Back\n");
                                    printf("\nEnter Choice: ");
                                    scanf("%d",&v);
                                    if(v==1) l_to_ml();
                                    else if(v==2) ml_to_l();
                                    else if(v==3) gallon_to_l();
                                    else if(v==4) l_to_gallon();
                                    else if(v==5) floz_to_ml();
                                    else if(v==6) ml_to_floz();
                                    else if(v==7) pint_to_l();
                                    else if(v==8) l_to_pint();
                                    else if(v==9) cubicm_to_l();
                                    else if(v==10) l_to_cubicm();
                                    else if(v==11) cc_to_ml();
                                    else if(v==12) ml_to_cc();
                                    else if(v==13) break;
                                }
                            }

                            // ---- Energy Conversion ----
                            if(uop==5) {
                                while(1){
                                    int e;
                                    printf("\n1.Joule -> Kilo Joule \n2.Kilo Joule -> Joule \n3.Joule -> Calorie \n4.Calorie -> Joule \n5.Calorie -> Kilo Calorie \n6.Kilo Calorie -> Calorie \n7.Electron Volt -> Joule \n8.Joule -> Electron Volt \n9.Joule -> Kilowatt Hour \n10.Kilowatt Hour -> Joule \n11.Back\n");
                                    printf("\nEnter Choice: ");
                                    scanf("%d",&e);

                                    if(e==1) joule_to_kilojoule();
                                    else if(e==2) kilojoule_to_joule();
                                    else if(e==3) joule_to_calorie();
                                    else if(e==4) calorie_to_joule();
                                    else if(e==5) calorie_to_kilocalorie();
                                    else if(e==6) kilocalorie_to_calorie();
                                    else if(e==7) electronvolt_to_joule();
                                    else if(e==8) joule_to_electronvolt();
                                    else if(e==9) joule_to_kwh();
                                    else if(e==10) kwh_to_joule();
                                    else if(e==11) break;
                                }
                            }

                            // ---- Speed Conversion ----
                            if(uop==6) {
                                while(1){
                                    int s;
                                    printf("\n1.Meter/Second -> Kilometer/Hour \n2.Kilometer /Hour -> Meter/Second \n3.Mile/Hour -> Kilometer/Hour \n4.Kilometer/Hour -> Mile/Hour \n5.Knot -> Kilometer/Hour \n6.Kilometer/Hour -> Knot \n7.Mach -> Kilometer/Hour \n8.Kilometer/Hour -> Mach \n9.Meter/Second -> Mile/Hour \n10.Mile/Hour -> Meter/Second \n11.Back\n");
                                    printf("\nEnter Choice: ");
                                    scanf("%d",&s);

                                    if(s==1) mps_to_kmph();
                                    else if(s==2) kmph_to_mps();
                                    else if(s==3) mph_to_kmph();
                                    else if(s==4) kmph_to_mph();
                                    else if(s==5) knot_to_kmph();
                                    else if(s==6) kmph_to_knot();
                                    else if(s==7) mach_to_kmph();
                                    else if(s==8) kmph_to_mach();
                                    else if(s==9) mps_to_mph();
                                    else if(s==10) mph_to_mps();
                                    else if(s==11) break;
                                }
                            }


                        } // unit converter while end
                    }

                    // ===== NUMBER SYSTEM CONVERTERS =====
                    if(cop==2) {
                        int n;
                        while(1){
                            printf("\n1.Decimal -> Binary \n2.Decimal -> Octal \n3.Decimal -> Hexa Decimal \n4.Binary -> Decimal \n5.Octal -> Decimal \n6.Hexa Decimal -> Decimal\n7.Binary -> Octal\n8.Octal -> Binary\n9.Binary -> Hexa Decimal\n10.Hexa Decimal -> Binary\n11.Octal -> Hexa Decimal\n12.Hexa Decimal -> Octal\n13.Back\n");
                            printf("\nEnter Choice: ");
                            scanf("%d",&n);
                            if(n==1) dec_to_binary();
                            else if(n==2) dec_to_octal();
                            else if(n==3) dec_to_hex();
                            else if(n==4) binary_to_dec();
                            else if(n==5) octal_to_dec();
                            else if(n==6) hex_to_dec();
                            else if(n==7) binary_to_octal();
                            else if(n==8) octal_to_binary();
                            else if(n==9) binary_to_hex();
                            else if(n==10) hex_to_binary();
                            else if(n==11) octal_to_hex();
                            else if(n==12) hex_to_octal();
                            else if(n==13) break;
                        }
                    }

                } // main converter while
                break;   // VERY IMPORTANT
            } //Case 7 Exit

        


            case 8: {   // ===== REAL-WORLD UTILITIES MENU =====
                int rop;   // Real-world tool choice

                while(1) {   // Loop for real-world submenu
                    printf("\n--- REAL-WORLD UTILITIES ---");
                    printf("\n1. BMI Calculator");
                    printf("\n2. Percentage Calculator");
                    printf("\n3. Leap Year Checker");
                    printf("\n4. ASCII Value Finder");
                    printf("\n5. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&rop);

                    if(rop==5) break;   // Exit real-world menu

                    switch(rop) {
                        case 1: bmi_calculator(); break;          // BMI tool
                        case 2: percentage_calculator(); break;   // Percentage tool
                        case 3: leap_year_checker(); break;        // Leap year check
                        case 4: ascii_finder(); break;              // ASCII finder
                        default: printf("\nInvalid choice\n");
                    }
                }
                break;   // Exit real-world case
            }

            case 9: {   // ===== PATTERN GENERATOR MENU =====
                int pop;   // Pattern main menu choice

                while(1) {
                    printf("\n--- PATTERN GENERATOR ---");
                    printf("\n1. Star Patterns");
                    printf("\n2. Number Patterns");
                    printf("\n3. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&pop);

                    if(pop == 3) break;   // Exit pattern menu

                    // ===== STAR PATTERNS MENU =====
                    if(pop == 1) {
                        int s;   // Star pattern choice
                        while(1) {
                            printf("\n--- STAR PATTERNS ---");
                            printf("\n1. Right Triangle");
                            printf("\n2. Inverted Right Triangle");
                            printf("\n3. Pyramid");
                            printf("\n4. Inverted Pyramid");
                            printf("\n5. Hollow Pyramid");
                            printf("\n6. Diamond");
                            printf("\n7. Hollow Diamond");
                            printf("\n8. Solid Square");
                            printf("\n9. Hollow Square");
                            printf("\n10. Hourglass");
                            printf("\n11. Butterfly");
                            printf("\n12. X Pattern");
                            printf("\n13. Back\n");

                            printf("\nEnter choice: ");
                            scanf("%d",&s);

                            if(s == 13) break;   // Exit star patterns menu

                            switch(s) {
                                case 1: right_triangle(); break;
                                case 2: inverted_right_triangle(); break;
                                case 3: pyramid(); break;
                                case 4: inverted_pyramid(); break;
                                case 5: hollow_pyramid(); break;
                                case 6: diamond(); break;
                                case 7: hollow_diamond(); break;
                                case 8: solid_square(); break;
                                case 9: hollow_square(); break;
                                case 10: hourglass(); break;
                                case 11: butterfly(); break;
                                case 12: x_pattern(); break;
                                default: printf("\nInvalid choice!\n");
                            }
                        }
                    }

                    // ===== NUMBER PATTERNS MENU =====
                    if(pop == 2) {
                        int n;   // Number pattern choice
                        while(1) {
                            printf("\n--- NUMBER PATTERNS ---");
                            printf("\n1. Floyd's Triangle");
                            printf("\n2. Increasing Number Pyramid");
                            printf("\n3. Increasing Inverted Number Pyramid");
                            printf("\n4. Repeating Number Pyramid");
                            printf("\n5. Repeating Inverted Number Pyramid");
                            printf("\n6. Pascal's Triangle");
                            printf("\n7. Back\n");

                            printf("\nEnter choice: ");
                            scanf("%d",&n);

                            if(n == 7) break;   // Exit number patterns menu

                            switch(n) {
                                case 1: floyd_triangle(); break;
                                case 2: inc_number_pyramid(); break;
                                case 3: inc_inverted_number_pyramid(); break;
                                case 4: repeat_number_pyramid(); break;
                                case 5: repeat_inverted_number_pyramid(); break;
                                case 6: pascal_triangle(); break;
                                default: printf("\nInvalid choice!\n");
                            }
                        }
                    }
                }
                break;   // Exit pattern case
            }

            case 10: {   // ===== HISTORY MENU =====
                int hop;   // History option choice

                while(1) {
                    printf("\n--- HISTORY MENU ---");
                    printf("\n1. View History");
                    printf("\n2. Clear History");
                    printf("\n3. Back\n");

                    printf("\nEnter choice: ");
                    scanf("%d",&hop);

                    if(hop == 3) break;   // Exit history menu

                    switch(hop) {
                        case 1:
                            view_history();   // Show history.txt content
                            break;

                        case 2:
                            clear_history();  // Delete history file content
                            break;

                        default:
                            printf("\nInvalid choice!\n");
                    }
                }
                break;   // Exit history case
            }

            default:
                printf("\nInvalid choice!\n");   // Wrong main menu input
        }
    }

    return 0;   // Program ends
}
