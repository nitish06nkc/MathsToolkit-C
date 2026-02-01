#include <stdio.h>
#include "bitwise_ops.h"
#include "history_ops.h"
#include <string.h>

// bitwise operations functions

// Bitwise AND operation
void bitwise_and() {
    unsigned int a, b;
    printf("\nEnter first integer: ");
    scanf("%u", &a);
    printf("Enter second integer: ");
    scanf("%u", &b);

    unsigned int result = a & b;
    printf("\nResult of %u & %u = %u\n", a, b, result);

    char log[100];;
    sprintf(log, "BITWISE AND: %u & %u = %u", a, b, result);
    save_history(log);
}

// Bitwise OR operation
void bitwise_or() {
    unsigned int a, b;
    printf("\nEnter first integer: ");
    scanf("%u", &a);
    printf("Enter second integer: ");
    scanf("%u", &b);

    unsigned int result = a | b;
    printf("\nResult of %u | %u = %u\n", a, b, result);

    char log[100];;
    sprintf(log, "BITWISE OR: %u | %u = %u", a, b, result);
    save_history(log);
}

// Bitwise XOR operation
void bitwise_xor() {
    unsigned int a, b;
    printf("\nEnter first integer: ");
    scanf("%u", &a);
    printf("Enter second integer: ");
    scanf("%u", &b);

    unsigned int result = a ^ b;
    printf("\nResult of %u ^ %u = %u\n", a, b, result);

    char log[100];;
    sprintf(log, "BITWISE XOR: %u ^ %u = %u", a, b, result);
    save_history(log);
}

// Bitwise NOT operation
void bitwise_not() {
    unsigned int a;
    printf("\nEnter an integer: ");
    scanf("%u", &a);

    unsigned int result = ~a;
    printf("\nResult of ~%u = %u\n", a, result);

    char log[100];;
    sprintf(log, "BITWISE NOT: ~%u = %u", a, result);
    save_history(log);
}

// Left shift operation
void left_shift() {
    unsigned int a, n;
    printf("\nEnter an integer: ");
    scanf("%u", &a);
    printf("Enter number of positions to shift left: ");
    scanf("%u", &n);    
    unsigned int result = a << n;
    printf("\nResult of %u << %u = %u\n", a, n, result);

    char log[100];;
    sprintf(log, "LEFT SHIFT: %u << %u = %u", a, n, result);
    save_history(log);
}

// Right shift operation
void right_shift() {
    unsigned int a, n;
    printf("\nEnter an integer: ");
    scanf("%u", &a);
    printf("Enter number of positions to shift right: ");
    scanf("%u", &n);    
    unsigned int result = a >> n;
    printf("\nResult of %u >> %u = %u\n", a, n, result);

    char log[100];;
    sprintf(log, "RIGHT SHIFT: %u >> %u = %u", a, n, result);
    save_history(log);
}