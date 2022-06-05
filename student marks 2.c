
#include<stdio.h>
int main()
{

    int m1,m2,m3,m4,m5,total,average;
    printf("Enter marks:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=total/5;
    printf("%d",total);
    printf("%d",average);


}
