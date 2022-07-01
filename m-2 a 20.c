#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter number to get table:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
}
