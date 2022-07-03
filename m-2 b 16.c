#include<stdio.h>
int main()
{
    int num=1,i;
    float sum=0.0,fact;
    while (num<=7)
    {
        fact=1;
        for (i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        sum+=(num/fact);
        num++;
    }
    printf("%f\n",sum);
}
