#include <stdio.h>
#include <math.h>
#include "financial_ops.h"
#include "history_ops.h"
#include <string.h>


// -------- Simple Interest Calculator --------
void simple_interest() {
    double p, r, t;

    // Input principal, rate and time
    printf("\nEnter Principal: ");
    scanf("%lf",&p);
    printf("\nEnter Rate (%%): ");
    scanf("%lf",&r);
    printf("\nEnter Time (years): ");
    scanf("%lf",&t);

    // Calculate simple interest and total amount
    double si = (p * r * t) / 100.0;
    double total = p + si;

    // Output results
    printf("\nSimple Interest = %.2lf\n", si);
    printf("\nTotal Amount = %.2lf\n", total);

    // Save calculation to history
    char log[200];
    sprintf(log, "SI: P=%.2lf R=%.2lf T=%.2lf -> SI=%.2lf Total=%.2lf", p, r, t, si, total);
    save_history(log);
}


// -------- Compound Interest Calculator --------
void compound_interest() {
    double p, r, t;
    int n;

    // Input values
    printf("\nEnter Principal: ");
    scanf("%lf",&p);
    printf("\nEnter Rate (%%): ");
    scanf("%lf",&r);
    printf("\nEnter Time (years): ");
    scanf("%lf",&t);
    printf("\nCompounded how many times per year? ");
    scanf("%d",&n);

    // Formula: A = P (1 + r/n)^(n*t)
    double amount = p * pow((1 + (r/(100*n))), n*t);
    double ci = amount - p;

    // Output results
    printf("\nCompound Interest = %.2lf\n", ci);
    printf("\nTotal Amount = %.2lf\n", amount);

    // Save history
    char log[250];
    sprintf(log, "CI: P=%.2lf R=%.2lf T=%.2lf N=%d -> CI=%.2lf Total=%.2lf", p, r, t, n, ci, amount);
    save_history(log);
}


// -------- Currency Exchange Calculator --------
void currency_exchange() {
    char from[20], to[20];
    double rate, amount, converted;

    // Input currency names
    printf("\nEnter source currency (e.g. USD, INR, EUR): ");
    scanf("%s", from);

    printf("\nEnter target currency (e.g. INR, USD, JPY): ");
    scanf("%s", to);

    // Input current exchange rate
    printf("\nEnter current exchange rate (1 %s = ? %s): ", from, to);
    scanf("%lf",&rate);

    // Input amount
    printf("\nEnter amount in %s: ", from);
    scanf("%lf",&amount);

    // Convert currency
    converted = amount * rate;

    // Output conversion
    printf("\n%.2lf %s = %.2lf %s\n", amount, from, converted, to);

    // Save to history
    char log[250];
    sprintf(log, "CURRENCY: %.2lf %s -> %.2lf %s (Rate=%.6lf)", amount, from, converted, to, rate);
    save_history(log);
}
