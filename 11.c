#include<stdio.h>
int main()
{
    int z,n,y,i,j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(z=n-i; z>0; z--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for(i=n-1; i>0; i--)
    {
        for(y=n-i; y>0; y--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
