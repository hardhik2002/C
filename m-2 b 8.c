#include<stdio.h>
int main()
{
    int a;
    scanf("%s",&a);
    if (a>=65 && a<=90)
        printf("Capital");
    else if (a>=97 && a<=122)
        printf("Lower");
    else if (a>=48 && a<=57)
        printf("Digit");
    else
        printf("Special char");
}
