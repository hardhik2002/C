#include<stdio.h>
int main()
{
    int sum=0,count=0,i;
    for(i=0;i<=100;i++)
    {
        if (i%6==0 && i%4!=0)
        {
            sum+=i;
            count+=1;

        }
    }
    printf("%d\n",sum);
    printf("%d",count);
}
