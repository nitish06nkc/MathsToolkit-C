#include <stdio.h>
#include "basic_ops.h"
#include "history_ops.h"
#include <string.h>

// Add N numbers and save history
int add(int n) {
    int sum = 0, num;
    char log[200] = "ADD: "; // history log buffer

    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;

        // append number to history string
        char temp[20];
        sprintf(temp, "%d ", num);
        strcat(log, temp);
    }

    // append result to history
    char result[50];
    sprintf(result, "= %d", sum);
    strcat(log, result);

    save_history(log);
    return sum;
}

// Subtract N numbers sequentially and save history
int subtract(int n) {
    int num, result = 0;
    char log[200] = "SUB: ";

    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num);

        char temp[20];
        sprintf(temp, "%d ", num);
        strcat(log, temp);

        if(i == 0)
            result = num;   // first number initializes result
        else
            result -= num;
    }

    char res[50];
    sprintf(res, "= %d", result);
    strcat(log, res);

    save_history(log);
    return result;
}

// Multiply N numbers and save history
int multiply(int n) {
    int num, result = 1;
    char log[200] = "MUL: ";

    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num);
        result *= num;

        char temp[20];
        sprintf(temp, "%d ", num);
        strcat(log, temp);
    }

    char res[50];
    sprintf(res, "= %d", result);
    strcat(log, res);

    save_history(log);
    return result;
}

// Divide N numbers sequentially and save history
float divide(int n) {
    int num;
    float result = 0;
    char log[200] = "DIV: ";

    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num);

        char temp[20];
        sprintf(temp, "%d ", num);
        strcat(log, temp);

        if(i == 0) {
            result = num; // first number is numerator
        }
        else {
            if(num == 0) {
                printf("Division by zero not allowed!\n");
                return result;
            }
            result = result / (float)num;
        }
    }

    char res[50];
    sprintf(res, "= %.2f", result);
    strcat(log, res);

    save_history(log);
    return result;
}
