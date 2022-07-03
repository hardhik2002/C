#include<stdio.h>
int main()
{
    int i,j,r,n=0;
    printf("Enter the range:");
    scanf("%d",&r);
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=i;j++)
        {
            n++;
            printf("%d",n);
        }
        printf("\n");
    }
}
