/* QUESTION:
 * Study the following table used to compute the tax payable by employees in
 * certain organization
 *
 * ---------------------------------------------------------------------------
 * |Gross Pay           | Fewer than Three dependants|Three or more dependants|
 * ---------------------------------------------------------------------------
 * |Ksh 10,000 or less  | Tax rate = 0               | Tax rate = 0           |
 * ---------------------------------------------------------------------------
 * |More than Ksh 10,000|                            |                        |
 * |and less than or    | Tax rate = 15%             | Tax rate = 10%         |
 * |equal to Ksh20,000  |                            |                        |
 * ---------------------------------------------------------------------------
 * |Over Ksh.20,000     | Tax rate = 35%             | Tax rate = 25%         |
 * ---------------------------------------------------------------------------
 *
 * A program is required to input the gross pay and number of dependants of an
 * employee and then computes for the tax payable and net pay. The program
 * should output gross pay, tax payable and the net pay of an employee in a
 * suitable format.
 * Hint:
 *    Tax payable = Gross pay * Tax rate
 *    Net pay = Gross pay - Tax payable
 * Required
 *
 *    i) Draw the flowchart of your solution
 *   ii) Write the corresponding program
 *
 */

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