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

// Time Zone Converter
void time_zone_converter() {
    int hours, minutes;
    int source_offset, dest_offset;
    int new_hours, new_minutes;
    int day = 0;

    printf("\n--- TIME ZONE CONVERTER ---\n");

    // Display common timezones
    printf("\nMajor Timezones (UTC Offset):\n");
    printf("1. UTC (GMT+0)\n");
    printf("2. IST (GMT+5:30) - India Standard Time\n");
    printf("3. EST (GMT-5) - Eastern Standard Time\n");
    printf("4. CST (GMT-6) - Central Standard Time\n");
    printf("5. PST (GMT-8) - Pacific Standard Time\n");
    printf("6. CET (GMT+1) - Central European Time\n");
    printf("7. SGT (GMT+8) - Singapore/Hong Kong\n");
    printf("8. JST (GMT+9) - Japan Standard Time\n");

    // Input time
    printf("\nEnter current time (hours 0-23): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);

    // Validate time
    if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Invalid time input!\n");
        return;
    }

    // Timezone selection
    int source_tz, dest_tz;
    printf("\nSelect SOURCE timezone (1-8): ");
    scanf("%d", &source_tz);
    printf("Select DESTINATION timezone (1-8): ");
    scanf("%d", &dest_tz);

    // Source timezone offset (in minutes)
    if(source_tz == 1) source_offset = 0;
    else if(source_tz == 2) source_offset = 330;
    else if(source_tz == 3) source_offset = -300;
    else if(source_tz == 4) source_offset = -360;
    else if(source_tz == 5) source_offset = -480;
    else if(source_tz == 6) source_offset = 60;
    else if(source_tz == 7) source_offset = 480;
    else if(source_tz == 8) source_offset = 540;
    else {
        printf("Invalid source timezone selection!\n");
        return;
    }

    // Destination timezone offset (in minutes)
    if(dest_tz == 1) dest_offset = 0;
    else if(dest_tz == 2) dest_offset = 330;
    else if(dest_tz == 3) dest_offset = -300;
    else if(dest_tz == 4) dest_offset = -360;
    else if(dest_tz == 5) dest_offset = -480;
    else if(dest_tz == 6) dest_offset = 60;
    else if(dest_tz == 7) dest_offset = 480;
    else if(dest_tz == 8) dest_offset = 540;
    else {
        printf("Invalid destination timezone selection!\n");
        return;
    }

    // Convert time
    int total_minutes = hours * 60 + minutes;
    int offset_diff = dest_offset - source_offset;
    total_minutes += offset_diff;

    // Handle day rollover
    if(total_minutes < 0) {
        total_minutes += 24 * 60;
        day = -1;
    }
    else if(total_minutes >= 24 * 60) {
        total_minutes -= 24 * 60;
        day = 1;
    }

    new_hours = total_minutes / 60;
    new_minutes = total_minutes % 60;

    if(day == -1) printf("\n(Previous Day)");
    else if(day == 1) printf("\n(Next Day)");

    printf("\nConverted Time: %02d:%02d\n", new_hours, new_minutes);

    // Save to history
    char log[250];
    sprintf(log,
            "TIMEZONE: %02d:%02d -> %02d:%02d (Offset Diff: %d minutes)",
            hours, minutes, new_hours, new_minutes, offset_diff);
    save_history(log);
}

// Age Calculator
void age_calculator() {
    int birth_day, birth_month, birth_year;
    int current_day, current_month, current_year;
    
    printf("\nEnter birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);
    
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &current_day, &current_month, &current_year);

    // Validate dates
    if(birth_month < 1 || birth_month > 12 || current_month < 1 || current_month > 12 ||
       birth_day < 1 || birth_day > 31 || current_day < 1 || current_day > 31) {
        printf("\nInvalid date input!\n");
        return;
    }

    if(birth_year > current_year || 
       (birth_year == current_year && birth_month > current_month) ||
       (birth_year == current_year && birth_month == current_month && birth_day > current_day)) {
        printf("\nBirth date cannot be greater than current date!\n");
        return;
    }

    // Calculate age in years, months, and days
    int years = current_year - birth_year;
    int months = current_month - birth_month;
    int days = current_day - birth_day;
    
    // Adjust if day hasn't occurred this month
    if(days < 0) {
        months--;
        // Get days in previous month
        int prev_month = current_month - 1;
        if(prev_month == 0) prev_month = 12;
        
        int days_in_month;
        if(prev_month == 2) days_in_month = 28;
        else if(prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) 
            days_in_month = 30;
        else 
            days_in_month = 31;
        
        days += days_in_month;
    }
    
    // Adjust if month hasn't occurred this year
    if(months < 0) {
        years--;
        months += 12;
    }

    printf("\n--- AGE INFORMATION ---\n");
    printf("Date of Birth: %02d/%02d/%04d\n", birth_day, birth_month, birth_year);
    printf("Current Date: %02d/%02d/%04d\n", current_day, current_month, current_year);
    printf("\n--- AGE RESULT ---\n");
    printf("Age: %d years, %d months, %d days\n", years, months, days);

    // Save to history
    char log[300];
    sprintf(log, "AGE: DOB=%02d/%02d/%04d Current=%02d/%02d/%04d Age=%d years %d months %d days", 
            birth_day, birth_month, birth_year, current_day, current_month, current_year, years, months, days);
    save_history(log);
}

// Date Difference Calculator
void date_difference_calculator() {
    int day1, month1, year1;
    int day2, month2, year2;

    printf("\nEnter first date (DD MM YYYY): ");
    scanf("%d %d %d",&day1,&month1,&year1);
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d",&day2,&month2,&year2);

    // Simple validation (not exhaustive)
    if(month1 < 1 || month1 > 12 || month2 < 1 || month2 > 12 ||
       day1 < 1 || day1 > 31 || day2 < 1 || day2 > 31) {
        printf("\nInvalid date input!\n");
        return;
    }

    // Convert both dates to "days since year 0"
    int n1 = year1 * 365 + day1;
    for(int m = 1; m < month1; m++) {
        if(m == 2) n1 += 28;
        else if(m == 4 || m == 6 || m == 9 || m == 11) n1 += 30;
        else n1 += 31;
    }   
    int n2 = year2 * 365 + day2;
    for(int m = 1; m < month2; m++) {
        if(m == 2) n2 += 28;
        else if(m == 4 || m == 6 || m == 9 || m == 11) n2 += 30;
        else n2 += 31;
    }

    int diff = n2 - n1;
    if(diff < 0) diff = -diff;

    printf("\nDate Difference: %d days\n", diff);
    // Save to history
    char log[250];
    sprintf(log, "DATEDIFF: Date1=%02d/%02d/%04d Date2=%02d/%02d/%04d Diff=%d days",
            day1, month1, year1, day2, month2, year2, diff);
    save_history(log);
}
