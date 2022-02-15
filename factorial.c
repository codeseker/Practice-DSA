#include<stdio.h>



void main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }

    printf("Factorial of given number is: ");
    printf("%d", fact);
    printf("\n");




}