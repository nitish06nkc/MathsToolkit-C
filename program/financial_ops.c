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

// profit and loss calculator
void profit_loss_calculator() {
    double cost_price, selling_price, profit, loss;

    // Input cost price and selling price
    printf("\nEnter Cost Price: ");
    scanf("%lf",&cost_price);
    printf("\nEnter Selling Price: ");
    scanf("%lf",&selling_price);

    // Calculate profit or loss
    if(selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("\nProfit = %.2lf\n", profit);
        printf("\n Profit %%= %.2lf%%\n", (profit / cost_price) * 100);
        // Save to history
        char log[200];
        sprintf(log, "PROFIT: CP=%.2lf SP=%.2lf -> Profit=%.2lf", cost_price, selling_price, profit);
        save_history(log);
    } else if(cost_price > selling_price) {
        loss = cost_price - selling_price;
        printf("\nLoss = %.2lf\n", loss);
        printf("\n Loss %% = %.2lf%%\n", (loss / cost_price) * 100);
        // Save to history
        char log[200];
        sprintf(log, "LOSS: CP=%.2lf SP=%.2lf -> Loss=%.2lf", cost_price, selling_price, loss);
        save_history(log);
    } else {
        printf("\nNo Profit No Loss.\n");
    }
}

// MRP discount calculator
void mrp_discount_calculator() {
    double mrp, discount_rate, discount_amount, final_price;

    // Input MRP and discount rate
    printf("\nEnter MRP: ");
    scanf("%lf",&mrp);
    printf("\nEnter Discount Rate (%%): ");
    scanf("%lf",&discount_rate);

    // Calculate discount amount and final price
    discount_amount = (discount_rate / 100.0) * mrp;
    final_price = mrp - discount_amount;

    // Output results
    printf("\nDiscount Amount = %.2lf\n", discount_amount);
    printf("\nFinal Price after Discount = %.2lf\n", final_price);
    // Save to history
    char log[200];
    sprintf(log, "MRP DISCOUNT: MRP=%.2lf Rate=%.2lf%% -> Discount=%.2lf Final=%.2lf", mrp, discount_rate, discount_amount, final_price);
    save_history(log);
}

// salary calculator
void salary_calculator() {
    double basic_salary, hra, da, gross_salary;

    // Input basic salary
    printf("\nEnter Basic Salary: ");
    scanf("%lf",&basic_salary);

    // Calculate HRA (20% of basic) and DA (10% of basic)
    hra = 0.20 * basic_salary;
    da = 0.10 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + hra + da;
    // Output results
    printf("\nHRA = %.2lf\n", hra);
    printf("\nDA = %.2lf\n", da);
    printf("\nGross Salary = %.2lf\n", gross_salary);

    // Save to history
    char log[200];
    sprintf(log, "SALARY: Basic=%.2lf -> HRA=%.2lf DA=%.2lf Gross=%.2lf", basic_salary, hra, da, gross_salary);
    save_history(log);
}

// income tax calculator
void income_tax_calculator() {
    double income, tax = 0.0;

    // Input annual income
    printf("\nEnter Annual Income: ");
    scanf("%lf",&income);

    // Calculate tax based on slabs
    if(income <= 250000) {
        tax = 0.0;
    } else if(income <= 500000) {
        tax = 0.05 * (income - 250000);
    } else if(income <= 1000000) {
        tax = 12500 + 0.20 * (income - 500000);
    } else {
        tax = 112500 + 0.30 * (income - 1000000);
    }

    // Output tax
    printf("\nIncome Tax = %.2lf\n", tax);

    // Save to history
    char log[200];
    sprintf(log, "INCOME TAX: Income=%.2lf -> Tax=%.2lf", income, tax);
    save_history(log);
}

// gst calculator
void gst_calculator() {
    double price, gst_rate, gst_amount, final_price;
    double cgst_rate, sgst_rate, igst_rate;
    // Input price and GST rate
    printf("\nEnter Price: ");
    scanf("%lf",&price);
    printf("\nEnter CGST Rate (%%): ");
    scanf("%lf",&cgst_rate);
    printf("\nEnter SGST Rate (%%): ");
    scanf("%lf",&sgst_rate);
    printf("\n Enter IGST Rate (%%): ");
    scanf("%lf",&igst_rate);

    double total_gst_rate = 0.0;
    total_gst_rate = cgst_rate + sgst_rate + igst_rate;

    // Calculate GST amount and final price
    gst_amount = (total_gst_rate / 100.0) * price;
    final_price = price + gst_amount;

    // Output results
    printf("\nGST Amount = %.2lf\n", gst_amount);
    printf("\nFinal Price after GST = %.2lf\n", final_price);

    // Save to history
    char log[200];
    sprintf(log, "GST: Price=%.2lf Rate=%.2lf%% -> GST=%.2lf Final=%.2lf", price, total_gst_rate, gst_amount, final_price);
    save_history(log);
}

// loan calculator
void loan_calculator() {
    double principal, annual_rate, time_years, monthly_rate, emi;
    int total_payments;

    // Input loan details
    printf("\nEnter Loan Amount (Principal): ");
    scanf("%lf",&principal);
    printf("\nEnter Annual Interest Rate (%%): ");
    scanf("%lf",&annual_rate);
    printf("\nEnter Loan Tenure (years): ");
    scanf("%lf",&time_years);

    // Calculate monthly interest rate and total payments
    monthly_rate = (annual_rate / 100.0) / 12.0;
    total_payments = (int)(time_years * 12);

    // Calculate EMI using formula
    emi = (principal * monthly_rate * pow(1 + monthly_rate, total_payments)) / (pow(1 + monthly_rate, total_payments) - 1);

    // Output EMI
    printf("\nMonthly EMI = %.2lf\n", emi);

    // Save to history
    char log[200];
    sprintf(log, "LOAN: Principal=%.2lf Rate=%.2lf Tenure=%.2lf -> EMI=%.2lf", principal, annual_rate, time_years, emi);
    save_history(log);
}

// sip calculator
void sip_calculator() {
    double monthly_investment, annual_rate, time_years, total_amount, future_value;
    int total_months;

    // Input SIP details
    printf("\nEnter Monthly Investment Amount: ");
    scanf("%lf",&monthly_investment);
    printf("\nEnter Annual Rate of Return (%%): ");
    scanf("%lf",&annual_rate);
    printf("\nEnter Investment Duration (years): ");
    scanf("%lf",&time_years);

    // Calculate total months and future value
    total_months = (int)(time_years * 12);
    double monthly_rate = (annual_rate / 100.0) / 12.0;

    future_value = monthly_investment * ((pow(1 + monthly_rate, total_months) - 1) / monthly_rate) * (1 + monthly_rate);
    total_amount = monthly_investment * total_months;

    // Output results
    printf("\nTotal Amount Invested = %.2lf\n", total_amount);
    printf("\nFuture Value of SIP = %.2lf\n", future_value);

    // Save to history
    char log[250];
    sprintf(log, "SIP: Monthly=%.2lf Rate=%.2lf Tenure=%.2lf -> Invested=%.2lf Future=%.2lf", monthly_investment, annual_rate, time_years, total_amount, future_value);
    save_history(log);
}

// depreciation calculator
void depreciation_calculator() {
    double cost_price, salvage_value, useful_life, depreciation;

    // Input asset details
    printf("\nEnter Cost Price of Asset: ");
    scanf("%lf",&cost_price);
    printf("\nEnter Salvage Value of Asset: ");
    scanf("%lf",&salvage_value);
    printf("\nEnter Useful Life of Asset (years): ");
    scanf("%lf",&useful_life);

    // Calculate annual depreciation using straight-line method
    depreciation = (cost_price - salvage_value) / useful_life;
    // Output depreciation
    printf("\nAnnual Depreciation = %.2lf\n", depreciation);
    // Save to history
    char log[200];
    sprintf(log, "DEPRECIATION: Cost=%.2lf Salvage=%.2lf Life=%.2lf -> Depreciation=%.2lf", cost_price, salvage_value, useful_life, depreciation);
    save_history(log);
}

// fd rd calculator
void fd_rd_calculator() {
    while(1){
        int choice;
        printf("\n--- FIXED DEPOSIT & RECURRING DEPOSIT CALCULATOR ---");
        printf("\n1. Fixed Deposit (FD) Calculator");
        printf("\n2. Recurring Deposit (RD) Calculator");
        printf("\n3. Back\n");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice==3) break;   // Exit FD/RD menu

        if(choice==1) {
            double principal, rate, time, maturity_amount, interest;

            // Input FD details
            printf("\nEnter Principal Amount: ");
            scanf("%lf",&principal);
            printf("\nEnter Annual Interest Rate (%%): ");
            scanf("%lf",&rate);
            printf("\nEnter Time Period (years): ");
            scanf("%lf",&time);

            // Calculate maturity amount and interest
            maturity_amount = principal * pow((1 + rate / 100), time);
            interest = maturity_amount - principal;

            // Output results
            printf("\nMaturity Amount = %.2lf\n", maturity_amount);
            printf("\nInterest Earned = %.2lf\n", interest);

            // Save to history
            char log[250];
            sprintf(log, "FD: Principal=%.2lf Rate=%.2lf Time=%.2lf -> Maturity=%.2lf Interest=%.2lf", principal, rate, time, maturity_amount, interest);
            save_history(log);
        }
        else if(choice==2) {
            double monthly_installment, rate, time, maturity_amount, interest;
            int total_months;
            // Input RD details
            printf("\nEnter Monthly Installment Amount: ");
            scanf("%lf",&monthly_installment);
            printf("\nEnter Annual Interest Rate (%%): ");
            scanf("%lf",&rate);
            printf("\nEnter Time Period (months): ");
            scanf("%d",&total_months);

            // Calculate maturity amount and interest
            double monthly_rate = (rate / 100) / 12;
            maturity_amount = monthly_installment * ((pow(1 + monthly_rate, total_months) - 1) / monthly_rate) * (1 + monthly_rate);
            interest = maturity_amount - (monthly_installment * total_months);

            // Output results
            printf("\nMaturity Amount = %.2lf\n", maturity_amount);
            printf("\nInterest Earned = %.2lf\n", interest);

            // Save to history
            char log[250];
            sprintf(log, "RD: Monthly=%.2lf Rate=%.2lf Months=%d -> Maturity=%.2lf Interest=%.2lf", monthly_installment, rate, total_months, maturity_amount, interest);
            save_history(log);
        }
    }
}

// inflation calculator
void inflation_calculator() {
    double current_price, inflation_rate, years, future_price;
    // Input current price, inflation rate and years
    printf("\nEnter Current Price: ");
    scanf("%lf",&current_price);
    printf("\nEnter Annual Inflation Rate (%%): ");
    scanf("%lf",&inflation_rate);
    printf("\nEnter Number of Years: ");
    scanf("%lf",&years);

    // Calculate future price
    future_price = current_price * pow((1 + inflation_rate / 100), years);

    // Output future price
    printf("\nFuture Price after %.2lf years = %.2lf\n", years, future_price);

    // Save to history
    char log[200];
    sprintf(log, "INFLATION: Current=%.2lf Rate=%.2lf Years=%.2lf -> Future=%.2lf", current_price, inflation_rate, years, future_price);
    save_history(log);
}

// retirement calculator
void retirement_calculator() {
    double current_age, retirement_age, monthly_expenses, years_left, total_corpus; 
    // Input details
    printf("\nEnter Current Age: ");
    scanf("%lf",&current_age);
    printf("\nEnter Desired Retirement Age: ");
    scanf("%lf",&retirement_age);
    printf("\nEnter Estimated Monthly Expenses after Retirement: ");
    scanf("%lf",&monthly_expenses);

    // Calculate years left and total corpus needed
    years_left = retirement_age - current_age;
    total_corpus = monthly_expenses * 12 * years_left * 25; // Assuming 25 years of retirement

    // Output results
    printf("\nYears Left until Retirement = %.2lf\n", years_left);
    printf("\nTotal Retirement Corpus Needed = %.2lf\n", total_corpus);

    // Save to history
    char log[250];
    sprintf(log, "RETIREMENT: CurrentAge=%.2lf RetireAge=%.2lf MonthlyExpenses=%.2lf -> YearsLeft=%.2lf Corpus=%.2lf", current_age, retirement_age, monthly_expenses, years_left, total_corpus);
    save_history(log);
}