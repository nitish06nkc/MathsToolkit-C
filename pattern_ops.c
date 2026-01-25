#include <stdio.h>
#include "pattern_ops.h"
#include "history_ops.h"
#include <string.h>

// Log pattern usage in history file
void log_pattern(const char *name, int n) {
    char log[200];
    sprintf(log, "PATTERN: %s Height/Size = %d", name, n);
    save_history(log);
}

// ---------------- STAR PATTERNS ----------------

// 1. Right Triangle Pattern
void right_triangle() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Right Triangle", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}

// 2. Inverted Right Triangle
void inverted_right_triangle() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Inverted Right Triangle", n);

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}

// 3. Pyramid Pattern
void pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Pyramid", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
}

// 4. Inverted Pyramid
void inverted_pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Inverted Pyramid", n);

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
}

// 5. Hollow Pyramid
void hollow_pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Hollow Pyramid", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1 || i==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 6. Diamond Pattern
void diamond() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Diamond", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
}

// 7. Hollow Diamond
void hollow_diamond() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Hollow Diamond", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf((k==1 || k==2*i-1) ? "*" : " ");
        printf("\n");
    }

    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf((k==1 || k==2*i-1) ? "*" : " ");
        printf("\n");
    }
}

// 8. Solid Square
void solid_square() {
    int n;
    printf("\nEnter size: ");
    scanf("%d",&n);
    log_pattern("Solid Square", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            printf("* ");
        printf("\n");
    }
}

// 9. Hollow Square
void hollow_square() {
    int n;
    printf("\nEnter size: ");
    scanf("%d",&n);
    log_pattern("Hollow Square", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            printf((i==1||i==n||j==1||j==n) ? "* " : "  ");
        printf("\n");
    }
}

// 10. Hourglass Pattern
void hourglass() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Hourglass", n);

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
    }
}

// 11. Butterfly Pattern
void butterfly() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Butterfly", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) printf("*");
        for(int j=1;j<=2*(n-i);j++) printf(" ");
        for(int j=1;j<=i;j++) printf("*");
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) printf("*");
        for(int j=1;j<=2*(n-i);j++) printf(" ");
        for(int j=1;j<=i;j++) printf("*");
        printf("\n");
    }
}

// 12. X Pattern
void x_pattern() {
    int n;
    printf("\nEnter size (odd recommended): ");
    scanf("%d",&n);
    log_pattern("X Pattern", n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf((i==j || i+j==n-1) ? "*" : " ");
        printf("\n");
    }
}

// ---------------- NUMBER PATTERNS ----------------

// Floyd’s Triangle
void floyd_triangle() {
    int n, num = 1;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Floyd Triangle", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("%d ", num++);
        printf("\n");
    }
}

// Increasing Number Pyramid
void inc_number_pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Increasing Number Pyramid", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ", k);
        printf("\n");
    }
}

// Inverted Number Pyramid
void inc_inverted_number_pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Inverted Number Pyramid", n);

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ", k);
        printf("\n");
    }
}

// Repeating Number Pyramid
void repeat_number_pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Repeating Number Pyramid", n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ", i);
        printf("\n");
    }
}

// Repeating Inverted Number Pyramid
void repeat_inverted_number_pyramid() {
    int n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    log_pattern("Repeating Inverted Number Pyramid", n);

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ", i);
        printf("\n");
    }
}

// Pascal’s Triangle
void pascal_triangle() {
    int n;
    printf("\nEnter height: ");
    scanf("%d", &n);
    log_pattern("Pascal Triangle", n);

    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j < n - i; j++) printf("    ");

        for (int k = 0; k <= i; k++) {
            printf("%8d", num);
            num = num * (i - k) / (k + 1);
        }
        printf("\n");
    }
}
