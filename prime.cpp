#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int c = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("Given number is a Prime number");
    }
    else
    {
        printf("n is not a Prime number");
    }
    return 0;
}