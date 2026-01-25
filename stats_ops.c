#include <stdio.h>
#include "stats_ops.h"
#include "history_ops.h"
#include <string.h>

void mean_calc() {
    int n;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);

    double arr[n], sum=0;
    printf("\nEnter Elements: ");
    for(int i=0;i<n;i++) {
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }

    double mean = sum/n;
    printf("\nMean = %.4lf\n", mean);

    char log[300] = "MEAN: ";
    char temp[50];

    for(int i=0;i<n;i++) {
        sprintf(temp, "%.2lf ", arr[i]);
        strcat(log, temp);
    }

    sprintf(temp, "= %.4lf", mean);
    strcat(log, temp);
    save_history(log);
}

void median_calc() {
    int n;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);

    double arr[n], temp;
    printf("\nEnter Elements: ");
    for(int i=0;i<n;i++)
        scanf("%lf",&arr[i]);

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    double median;
    if(n%2==0)
        median = (arr[n/2 - 1] + arr[n/2]) / 2;
    else
        median = arr[n/2];

    printf("\nMedian = %.4lf\n", median);

    char log[300] = "MEDIAN: ";
    char t[50];

    for(int i=0;i<n;i++) {
        sprintf(t, "%.2lf ", arr[i]);
        strcat(log, t);
    }

    sprintf(t, "= %.4lf", median);
    strcat(log, t);
    save_history(log);
}

void mode_calc() {
    int n;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter Elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int maxCount = 0, mode = arr[0];

    for(int i=0;i<n;i++) {
        int count = 0;
        for(int j=0;j<n;j++) {
            if(arr[j]==arr[i])
                count++;
        }

        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    printf("\nMode = %d (appears %d times)\n", mode, maxCount);

    char log[300] = "MODE: ";
    char t[50];

    for(int i=0;i<n;i++) {
        sprintf(t, "%d ", arr[i]);
        strcat(log, t);
    }

    sprintf(t, "= %d (count %d)", mode, maxCount);
    strcat(log, t);
    save_history(log);
}
