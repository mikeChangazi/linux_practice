#include<stdio.h>
//function to calculate basic pay
// declare a function with arguments pointer *days, pointer *rate and pointer *basic
float calc_basic(int *days, float *rate){
	//calculate basic pay
float basic = *rate * *days;

return basic;
}

// function to calculate tax based on tax brackets
float calc_paye(float *basic) {
	float tax=0.0;
    if (*basic <= 100000) {
        tax = 0.0;
    } else if (*basic <= 100000 + 350000) { 
        tax = 0.25 * (*basic - 100000);//tax for the next 350,000
    } else if (*basic <= 100000 + 350000 + 2050000) { 
        tax = 0.25 * (350000) + (*basic - (100000 + 350000))*0.3; // tax for the next 2,050,000
    } else if (*basic <= 100000 + 350000 + 2050000 + 2500000) {
        tax =0.25 * (350000) + 0.30 * (2050000) + (*basic - (100000 + 350000 + 2050000))* 0.35; //tax for the next 2500000
    } else {
        // Handle other cases if needed
    }

    return tax; // function returns tax;
}

float calc_other_deductions(float *medical, float*pension){
return *medical + *pension;
}

float calc_netpay(float *basic, float *tax, float *total_other_deductions){
    return *basic -(*tax + *total_other_deductions);
}


int main(){
    char emp_name[80];
    int emp_number;
    int days;
    float rate;
    float pension;
    float medical;
    float netPay;
    //get employee name
    puts("Enter Employee name: \n");
    scanf("%[^\n]", emp_name);

    //get employee number
    puts("Enter Employee number: \n");
    scanf("%d", &emp_number);

    //get number of working days
    puts("Enter number of days worked: \n");
    scanf("%i", &days);

    //get pay rate
    puts("Enter employee pay rate: \n");
    scanf("%f", &rate);
     
    //calculate basic pay
    float basic = calc_basic(&days, &rate);
    //printf("%s's Basic pay is: %0.2f\n", emp_name, basic);
    
    //calculate payee
    float paye = calc_paye(&basic);
    // printf("Total tax deducted due is: %0.2lf\n", paye);

    //Calculate other deductions
    puts("OTHER DEDUCTIONS\n");
    puts("Enter pension: \n" );
    scanf("%f", &pension);

    puts ("Enter medical fee: \n");
    scanf("%f", &medical);

    float other_deductions = calc_other_deductions(&medical, &pension);
    //printf("other deductions: %0.2lf\n", other_deductions);

   //calculate Net pay
   netPay = calc_netpay(&basic, &paye, &other_deductions);
   //printf("Net pay is: %0.2lf \n", netPay);

   //PAYSLIP

   printf("\t\t\t\tPayslip for %s\t\t\t\t", emp_name);
   puts("");
   printf("\t\t\t Employment number\t\t\t %i", emp_number);

   puts("");
   puts("");
   printf("\t\t\t Days Worked\t\t\t %i", days);

   puts("");
   printf("\t\t\t Basic Pay\t\t\t %0.2lf", basic);
   puts("");
   
   puts("");
   printf("\t\t\t\t\t DEDUCTIONS \t\t\t\t\t");
   puts("");

   puts("");
   printf("\t\t\t Tax deduction\t\t\t %0.2lf", paye);

   puts("");
   printf("\t\t\t Pension \t\t\t %0.2lf", pension);
   puts("");

   printf("\t\t\t Medical fee\t\t\t %0.2lf", medical);
   puts("");

   printf("\t\t\t Total \t\t\t %0.2lf", paye + other_deductions);
   puts("");

   printf("\t\t\t Net Pay \t\t\t %0.2lf", netPay);
   puts("");

   return 0;
}
