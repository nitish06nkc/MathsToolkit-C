#include <stdio.h>
#include <math.h>
#include "number_ops.h"
#include "history_ops.h"
#include <string.h>

// Check whether a number is prime
int is_prime(int n) {
    if(n <= 1) return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return 0;
    }
    return 1;
}

// Generate and print prime numbers up to n
void generate_primes(int n) {
    printf("\n");
    char log[300];
    sprintf(log, "PRIME LIST UP TO %d: ", n);

    for(int i=2;i<=n;i++) {
        if(is_prime(i)) {
            printf("%d ",i);
            char temp[20];
            sprintf(temp, "%d ", i);
            strcat(log, temp);
        }
    }
    printf("\n");

    save_history(log);
}

// Calculate Greatest Common Divisor (Euclidean Algorithm)
int gcd(int a , int b) {
    int x=a, y=b;
    while(b!=0) {
        int t=b;
        b=a%b;
        a=t;
    }

    char log[200];
    sprintf(log, "GCD: %d and %d = %d", x, y, a);
    save_history(log);

    return a;
}

// Calculate Least Common Multiple
int lcm(int a , int b) {
    int result = (a*b)/gcd(a,b);

    char log[200];
    sprintf(log, "LCM: %d and %d = %d", a, b, result);
    save_history(log);

    return result;
}

// Reverse a number
int reverse_number(int n) {
    int original = n;
    int rev=0;
    while(n>0) {
        rev = rev*10 + (n%10);
        n/=10;
    }

    char log[200];
    sprintf(log, "REVERSE: %d -> %d", original, rev);
    save_history(log);

    return rev;
}

// Check if a number is palindrome
int is_palindrome(int n) {
    int rev = reverse_number(n);
    int result = (n == rev);

    char log[200];
    sprintf(log, "PALINDROME: %d -> %s", n, result ? "YES" : "NO");
    save_history(log);

    return result;
}

// Check if a number is Armstrong number
int is_armstrong(int n) {
    int temp=n, sum=0, digits=count_digits(n);
    while(temp>0) {
        int d=temp%10;
        sum += pow(d,digits);
        temp/=10;
    }

    char log[200];
    sprintf(log, "ARMSTRONG: %d -> %s", n, (sum==n) ? "YES" : "NO");
    save_history(log);

    return sum==n;
}

// Sum of digits of a number
int sum_digits(int n) {
    int original=n, s=0;
    while(n>0) {
        s+=n%10;
        n/=10;
    }

    char log[200];
    sprintf(log, "SUM DIGITS: %d -> %d", original, s);
    save_history(log);

    return s;
}

// Count digits in a number
int count_digits(int n) {
    int c=0;
    if(n==0) return 1;
    while(n>0) {
        c++;
        n/=10;
    }
    return c;
}

// Calculate factorial of a number
long long factorial_num(int n) {
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;

    char log[200];
    sprintf(log, "FACTORIAL: %d! = %lld", n, f);
    save_history(log);

    return f;
}

// Generate Fibonacci series
void fibonacci(int n) {
    printf("\n");
    long long a=0,b=1,c;

    char log[300];
    sprintf(log, "FIBONACCI %d TERMS: ", n);

    for(int i=1;i<=n;i++) {
        printf("%lld ",a);

        char temp[30];
        sprintf(temp, "%lld ", a);
        strcat(log, temp);

        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");

    save_history(log);
}
