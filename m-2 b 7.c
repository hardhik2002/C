#include<stdio.h>
int main()
{
    double ammount;
    printf("Enter ammount:");
    scanf("%lf",&ammount);
    if (ammount>5000 && ammount<10000)
    {
        double commision;
         commision=ammount*(2/100p);
        printf("%lf",commision);
    }
    else if (ammount>10000)
    {
        printf("%lf",5/100*(ammount));
    }
    else
        printf("nill");
}
