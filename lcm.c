#include<stdio.h>
int main()
{
    int a,b,lcm;
    scanf("%d %d",&a,&b);
    for (lcm=1;lcm<=(a*b);lcm++)
    {
        if (lcm%a==0 && lcm%b==0)
            break;
    }
    printf("%d",lcm);
}
