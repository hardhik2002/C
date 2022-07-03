#include<stdio.h>
int main()
{
    int n,i=2,j=2,prime=1;
    printf("Enter range:");
    scanf("%d",&n);
    for (i;i<=n;i++)
    {
        for (j;j<i;j++)
        {
            if (i%j==0)
                prime=0;
        }
        if (prime){
            printf("%d\n",i);
            prime=1;
        }
    }

}
