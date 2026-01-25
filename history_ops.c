#include <stdio.h>
#include "history_ops.h"

// Save a text entry to history file
void save_history(const char *text) {
    FILE *fp = fopen("history.txt", "a");   // Open file in append mode

    if(fp == NULL) {
        printf("Error opening history file\n");
        return;
    }

    fprintf(fp, "%s\n", text);  // Write entry
    fclose(fp);                 // Close file
}

// Display all saved history entries
void view_history() {
    FILE *fp = fopen("history.txt", "r");   // Open file in read mode

    if(fp == NULL) {
        printf("\nNo history found.\n");
        return;
    }

    char line[300];
    printf("\n-------- HISTORY --------\n");

    while(fgets(line, sizeof(line), fp)) {  // Read line by line
        printf("%s", line);
    }

    printf("-------------------------\n");

    fclose(fp);
}

// Clear the history file
void clear_history() {
    FILE *fp = fopen("history.txt", "w");   // 'w' mode truncates file

    if(fp == NULL) {
        printf("Error clearing history\n");
        return;
    }

    fclose(fp);
    printf("\nHistory cleared successfully!\n");
}
