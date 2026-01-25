#include <stdio.h>
#include "realworld_ops.h"
#include "history_ops.h"
#include <string.h>

// BMI Calculator (Body Mass Index)
void bmi_calculator() {
    double weight, height, bmi;

    printf("\nEnter weight (kg): ");
    scanf("%lf",&weight);

    printf("Enter height (meters): ");
    scanf("%lf",&height);

    // BMI formula
    bmi = weight / (height * height);
    printf("\nBMI = %.2lf\n", bmi);

    char category[50];

    // BMI Category Classification
    if(bmi < 18.5) {
        printf("Category: Underweight\n");
        strcpy(category, "Underweight");
    }
    else if(bmi < 25) {
        printf("Category: Normal\n");
        strcpy(category, "Normal");
    }
    else if(bmi < 30) {
        printf("Category: Overweight\n");
        strcpy(category, "Overweight");
    }
    else {
        printf("Category: Obese\n");
        strcpy(category, "Obese");
    }

    // Save to history
    char log[200];
    sprintf(log, "BMI: Weight=%.2lf Height=%.2lf BMI=%.2lf Category=%s", weight, height, bmi, category);
    save_history(log);
}

// Percentage Calculator
void percentage_calculator() {
    double total, obtained;
    printf("\nEnter total value: ");
    scanf("%lf",&total);
    printf("Enter obtained value: ");
    scanf("%lf",&obtained);

    // Prevent division by zero
    if(total == 0) {
        printf("\nTotal cannot be zero!\n");
        return;
    }

    double percent = (obtained / total) * 100;
    printf("\nPercentage = %.2lf%%\n", percent);

    // Save result in history
    char log[200];
    sprintf(log, "PERCENT: Obtained=%.2lf Total=%.2lf Result=%.2lf%%", obtained, total, percent);
    save_history(log);
}

// Leap Year Checker
void leap_year_checker() {
    int year;
    printf("\nEnter year: ");
    scanf("%d",&year);

    char log[200];

    // Leap year condition
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("\n%d is a Leap Year\n", year);
        sprintf(log, "LEAPYEAR: %d = Leap Year", year);
    }
    else {
        printf("\n%d is NOT a Leap Year\n", year);
        sprintf(log, "LEAPYEAR: %d = Not Leap Year", year);
    }

    save_history(log);
}

// ASCII Value Finder
void ascii_finder() {
    char ch;
    printf("\nEnter a character: ");
    scanf(" %c",&ch);   // Leading space to ignore newline

    printf("\nASCII value of '%c' = %d\n", ch, ch);

    // Save ASCII lookup in history
    char log[200];
    sprintf(log, "ASCII: '%c' = %d", ch, ch);
    save_history(log);
}
