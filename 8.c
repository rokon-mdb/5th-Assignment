#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=2; i<=n; i++)
    {
        for(j=i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
