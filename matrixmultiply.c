#include <stdio.h>

void main()
{
    
    int n,m,i,j,k;
    printf("Enter rows for first matrix");
    scanf("%d", &n);
    printf("Enter col for first matrix");
    scanf("%d", &m);

    int a[n][m];
    printf("Enter the elements of first Matrix: ");
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // second matrix
    int p,q;
    printf("Enter rows for second matrix");
    scanf("%d", &p);
    printf("Enter col for second matrix");
    scanf("%d", &q);

    int b[p][q];
    printf("Enter the elements of first Matrix: ");
    printf("\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
   
    int c[n][q];
    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            c[i][j] = 0;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            for(k=0; k<p; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }


   
}