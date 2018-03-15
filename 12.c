#include<stdio.h>
int main()
{
    int n,i,j,z;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(z=n-i; z>0; z--)
        {
            printf(" ");
        }
        for(j=i; j>0; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=n-1; i>0; i--)
    {
        for(z=n-i; z>0; z--)
        {
            printf(" ");
        }
        for(j=i; j>0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
