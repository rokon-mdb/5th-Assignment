#include<stdio.h>
int main()
{
    int n,z, i,j;
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
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
