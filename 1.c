#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        for(j=n; j>0; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;
}
