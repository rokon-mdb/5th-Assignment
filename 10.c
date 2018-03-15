#include<stdio.h>
int main()
{
    int z,n,i,j;
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
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
