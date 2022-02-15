#include <stdio.h>
#include <string.h>

void main()
{


    int number_of_items;
    scanf("%d", &number_of_items);

    float price[number_of_items];
    int i;
    for (i = 0; i < number_of_items; i++)
    {

        scanf("%f", &price[i]);
    }

    // NAswer
    // printf("Name of product is: %c", name);
    printf("\n");
    float total;
    for(i=0; i<number_of_items; i++)
    {
        total = total + price[i];
    }
    printf("Total amount without GST: %f", total);
    printf("\n");
    
    printf("Applying 14% GST: ");
    printf("\n");
    total = total * 14/100;

    printf("Total amount after GST: %f", total);
    printf("\n");
}