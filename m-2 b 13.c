#include<stdio.h>
int main()
{
    int n,i,r=0,s=0,I;
    printf("Enter the range:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        I=i;
        while (i!=0)
        {
            r=i%10;
            s=s+(r*r*r);
            i=i/10;

        }
        i=I;
        if (s==I)
            printf("%d",I);
    }
}
