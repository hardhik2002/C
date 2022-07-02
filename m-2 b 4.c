#include<stdio.h>
int main()
{
    int m1,m2,m3;
    printf("Enter the 3 subjects marks:");
    scanf("%d %d %d",&m1,&m2,&m3);
    if (m1>=60 && m2>=50 && m3>=40 && m1+m2+m3>=200 && m1+m2>=150)
        printf("Eligible");
    else
        printf("Not Eligible");
}
