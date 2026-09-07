#include<stdio.h>
#include<math.h>

// here we were going to calculate the interest using the formula A = P(1 + r/n)^(nt)
// A =# the future value of the investment/loan, including interest
// P = the principal investment amount (the initial deposit or loan amount)
// r = the annual interest rate (in decimal form)
// n = the number of times that interest is compounded per year
// t = the number of years the money is invested or borrowed for

int main(){
  double principal, rate, total_amount;
  int time, compoundings;
  printf("Enter the principal amount: ");
    scanf("%lf", & principal);

  printf("Enter the annual interest rate :");
    scanf("%lf", & rate);
    rate =rate/100; // converting percentage to decimal

    printf("Enter the number of years:");
    scanf("%d",& time);

    printf("Enter the number of times interest is compounding per year:\n");
    scanf("%d", & compoundings);

    total_amount = principal*pow(1+rate/compoundings,compoundings*time);
    printf("After %d years, the total amount you have to pay is: %2lf\n",time, total_amount);
    return 0;    
}