/* QUESTION:
 *
 * A computer program is required to evaluate the credit worthy of a client. The
 * program reads the credit limit, price and quantity of the item to be
 * purchased by the client, If the value of the goods is more than the credit
 * limit, the program displays "Sorry you cannot purchase goods worth such a
 * value on credit" and allows the customer to re-enter the quantity,
 * otherwiise, displays "Thank You for purchasing from us" and the value of the
 * purchase. This should be repeated for n customers
 *
 * Required:
 *  i) Draw a flowchart for your solution
 * ii) Write the C program that implemnts the algorithm in (i) above
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char input_credit_limit[6];
    int n, quantity, counter, credit_limit;
    float price_of_item, value_of_purchase;
    printf("Enter the number of customers: ");
    scanf("%d",&n);

    counter = n;

    while (counter>0)
    {
        bool is_cl_valid = false;
        while(is_cl_valid == false)
        {
            printf("\n\nEnter your credit limit(Up to 5 digits): ");
            scanf("%5s", input_credit_limit);
            if (strlen(input_credit_limit)<= 5 && strspn(input_credit_limit,"0123456789")==strlen(input_credit_limit))
            {
                is_cl_valid = true;
            }else if (strlen(input_credit_limit)> 5)
            {
                printf("\nYour credit limit is invalid! It can not surpass $99999");
                is_cl_valid = false;
            }
        }
        credit_limit = atoi(input_credit_limit);

        printf("\n\nEnter the price of item your purchasing: ");
        scanf("%f",&price_of_item);

        do{
            printf("\nEnter the number of items you wish to buy: ");
            scanf("%d",&quantity);
            if (credit_limit < value_of_purchase)
            {
                printf("\n\nSorry you can not purchase goods worth such a value on credit");
            }
            value_of_purchase = quantity * price_of_item;
        } while (credit_limit < value_of_purchase);

        printf("\n\nThank You for purchasing from us");
        printf("\nThe value of your purchase is: %.2f",value_of_purchase);
        counter = counter - 1;
    }

    return 0;
}
