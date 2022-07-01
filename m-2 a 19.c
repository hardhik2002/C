#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter range:");
    scanf("%d",&n);
    printf("The numbers are:\n");
    for(i=1;i<=n;i++)

    {
        if (i%2!=0){
                printf("%d\n",i);
                sum+=i;

        }

    }
    printf("The sum is:%d",sum);

}
