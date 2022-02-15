#include <stdio.h>

void main()
{

    int a[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans[4];
    for (i = 3; i >= 0; i--)
    {
        ans[3 - i] = a[i];
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d", ans[i]);
        printf(" ");
    }
    printf("\n");
}