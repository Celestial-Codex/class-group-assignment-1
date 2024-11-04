#include "stdio.h"
#include "stdlib.h"

int main(void) {
  double gross_pay, no_of_dependants, tax_rate, tax_payable, net_pay;
  printf("Welcome to tax crunch. Your all in one solution to all tax "
         "calculations\n");
  printf("Please Enter Your Gross Pay: ");
  scanf("%lf", &gross_pay);
  printf("Please Enter Number Of Dependants: ");
  scanf("%lf", &no_of_dependants);

  if (gross_pay > 20000) {
    if (no_of_dependants >= 3) {
      tax_rate = 25.0 / 100.0;

    } else {
      tax_rate = 35.0 / 100.0;
    }
  } else if (gross_pay > 10000 && gross_pay <= 20000) {
    if (no_of_dependants >= 3) {
      tax_rate = 10.0 / 100.0;

    } else {
      tax_rate = 15.0 / 100.0;
    }
  } else {
    tax_rate = 0;
  }
  tax_payable = gross_pay * tax_rate;
  net_pay = gross_pay - tax_payable;
  printf("\n------------------------------------------------------------\n\n");
  printf("Gross Pay:   Ksh. %.2lf\n", gross_pay);
  printf("Tax Payable: Ksh. %.2lf\n", tax_payable);
  printf("Net Pay:     Ksh. %.2lf\n", net_pay);
  printf("\n------------------------------------------------------------\n");
  return 0;
}