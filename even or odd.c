#include<stdio.h>
int main()
{

    int a;
    printf("Enter a number to know even or odd:");
    scanf("%d",&a);
    if (a%2==0)
    {

        printf("%d is Even",a);
    }
    else{
        printf("%d is odd",a);
    }
}
