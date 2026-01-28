#include <stdio.h>
#include <math.h>
#include "scientific_ops.h"
#include "history_ops.h"
#include <string.h>

// Constant value of PI for angle conversions
#define PI 3.141592653589793

// Power calculation: a^b
double power_calc(double a , double b) {
    double result = pow(a,b);

    char log[200];
    sprintf(log, "POW: %.2lf ^ %.2lf = %.2lf", a, b, result);
    save_history(log);

    return result;
}

// Square root of a number
double square_root(double x) {
    double result = sqrt(x);

    char log[200];
    sprintf(log, "SQRT: %.2lf = %.2lf", x, result);
    save_history(log);

    return result;
}

// Cube root of a number
double cube_root(double x) {
    double result = cbrt(x);

    char log[200];
    sprintf(log, "CBRT: %.2lf = %.2lf", x, result);
    save_history(log);

    return result;
}

// nth root calculation
double nth_root_calc(double x , double n) {
    double result = pow(x, 1.0/n);

    char log[200];
    sprintf(log, "NTH ROOT: %.2lf root of %.2lf = %.2lf", n, x, result);
    save_history(log);

    return result;
}

// Log base 10
double log10_calc(double x) {
    double result = log10(x);

    char log[200];
    sprintf(log, "LOG10: %.2lf = %.2lf", x, result);
    save_history(log);

    return result;
}

// Log with any base
double log_base_calc(double x , double base) {
    double result = log(x) / log(base);

    char log[200];
    sprintf(log, "LOG BASE: log base %.2lf of %.2lf = %.2lf", base, x, result);
    save_history(log);

    return result;
}

// Natural logarithm (base e)
double ln_calc(double x) {
    double result = log(x);

    char log[200];
    sprintf(log, "LN: %.2lf = %.2lf", x, result);
    save_history(log);

    return result;
}

// Modulus operation (a % b)
int modulus_calc(int a , int b) {
    int result = a % b;

    char log[200];
    sprintf(log, "MOD: %d %% %d = %d", a, b, result);
    save_history(log);

    return result;
}

// Convert degrees to radians
double deg_to_rad(double deg) {
    return deg * (PI / 180.0);
}

// Convert radians to degrees
double rad_to_deg(double rad) {
    return rad * (180.0 / PI);
}

// Trigonometry menu for sin, cos, tan
void trig_menu() {
    int choice;
    double angle;

    while(1) {
        printf("\n1. sin");
        printf("\n2. cos");
        printf("\n3. tan");
        printf("\n4. sin inverse");
        printf("\n5. cos inverse");
        printf("\n6. tan inverse");
        printf("\n7. Back\n");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice==7) break;
        else if(choice>=1 && choice<=3) {
            printf("\nEnter angle in degrees: ");
            scanf("%lf",&angle);

            double rad = deg_to_rad(angle);
            double result;

            if(choice==1) {
                result = sin(rad);
                printf("\nsin = %.6lf\n", result);
                char log[200];
                sprintf(log, "SIN: %.2lf deg = %.6lf", angle, result);
                save_history(log);
                continue;
            }
            else if(choice==2) {
                result = cos(rad);
                printf("\ncos = %.6lf\n", result);
                char log[200];
                sprintf(log, "COS: %.2lf deg = %.6lf", angle, result);
                save_history(log);
                continue;
            }
            else if(choice==3) {
                result = tan(rad);
                printf("\ntan = %.6lf\n", result);
                char log[200];
                sprintf(log, "TAN: %.2lf deg = %.6lf", angle, result);
                save_history(log);
                continue;
            }
            else {
                printf("\nInvalid choice\n");
                continue;
            }
    }
        else if(choice>=4 && choice<=6){
            double value , result;
            printf("\nEnter value: ");
            scanf("%lf",&value);

            if(value < -1 || value > 1) {
                printf("\nValue out of range for inverse trigonometric functions\n");
                continue;
            }

            if(choice==4){
                result = asin(value);
                printf("\nsin inverse = %.6lf rad\n", result);
                char log[200];
                sprintf(log, "SIN INV: %.6lf = %.6lf rad", value, result);
                save_history(log);
                continue;
            }
            else if(choice==5){
                result = acos(value);
                printf("\ncos inverse = %.6lf rad\n", result);
                char log[200];
                sprintf(log, "COS INV: %.6lf = %.6lf rad", value, result);
                save_history(log);
                continue;
            }
            else if(choice==6){
                result = atan(value);
                printf("\ntan inverse = %.6lf rad\n", result);
                char log[200];
                sprintf(log, "TAN INV: %.6lf = %.6lf rad", value, result);
                save_history(log);
                continue;
            }
            else {
                printf("\nInvalid choice\n");
                continue;
            }
        }
}}

// Finds roots of quadratic equation ax^2 + bx + c = 0
void quadratic_roots(double a , double b , double c) {
    double d = b*b - 4*a*c;
    char log[300];

    if(d>0) {
        double r1 = (-b + sqrt(d))/(2*a);
        double r2 = (-b - sqrt(d))/(2*a);
        printf("\nRoot1 = %.4lf\n",r1);
        printf("Root2 = %.4lf\n",r2);

        sprintf(log, "QUAD: %.2lfx^2 + %.2lfx + %.2lf = Roots %.4lf, %.4lf", a,b,c,r1,r2);
        save_history(log);
    }
    else if(d==0) {
        double r = -b/(2*a);
        printf("\nRoot = %.4lf\n",r);

        sprintf(log, "QUAD: %.2lfx^2 + %.2lfx + %.2lf = Root %.4lf", a,b,c,r);
        save_history(log);
    }
    else {
        printf("\nComplex Roots\n");
        sprintf(log, "QUAD: %.2lfx^2 + %.2lfx + %.2lf = Complex Roots", a,b,c);
        save_history(log);
    }
}

// Factorial helper function
long long factorial(int n) {
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

// Permutation nPr
long long permutation(int n , int r) {
    long long result = factorial(n)/factorial(n-r);

    char log[200];
    sprintf(log, "PERM: %dP%d = %lld", n, r, result);
    save_history(log);

    return result;
}

// Combination nCr
long long combination(int n , int r) {
    long long result = factorial(n)/(factorial(r)*factorial(n-r));

    char log[200];
    sprintf(log, "COMB: %dC%d = %lld", n, r, result);
    save_history(log);

    return result;
}
