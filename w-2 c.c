// fabinoci series
#include<stdio.h>
int main()
{
    int num,i,t1,t2,nextterm;
    printf("Enter a number to find it's fabinoci:");
    scanf("%d",&num);
    t1=0,t2=1;
    nextterm=t1+t2;
    printf("%d,%d,",t1,t2);
    for(i=3;i <=num ;++i)
        {
            printf("%d,",nextterm);
            t1=t2;
            t2=nextterm;
            nextterm=t1+t2;
    }
}

