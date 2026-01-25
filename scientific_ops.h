#ifndef SCIENTIFIC_OPS_H
#define SCIENTIFIC_OPS_H

// Power function: calculates a^b
double power_calc(double a , double b);

// Square root of a number
double square_root(double x);

// Cube root of a number
double cube_root(double x);

// Logarithm base 10
double log10_calc(double x);

// Natural logarithm (base e)
double ln_calc(double x);

// Modulus operation for integers
int modulus_calc(int a , int b);

// Trigonometry menu handler (sin, cos, tan)
void trig_menu();

// Degree to radian conversion
double deg_to_rad(double deg);

// Radian to degree conversion
double rad_to_deg(double rad);

// Quadratic equation root finder
void quadratic_roots(double a , double b , double c);

// Factorial helper function
long long factorial(int n);

// Permutation (nPr)
long long permutation(int n , int r);

// Combination (nCr)
long long combination(int n , int r);

#endif
