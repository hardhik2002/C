/* sum of two numbers without using + operator*/
#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for (i=1;i<=a;i++)
    {
       b++;
    }
    printf("%d",b);
}
