#include<stdio.h>
int main()
{
    int x,y,i=2,pime;
    printf("Enter the start:");
    scanf("%d",&x);
    printf("Enter end:");
    scanf("%d",&y);
    int    prime=1;
    for (x;x<=y;x++){
        prime=1;
        if (x==1)
            prime=0;
        for (i=2;i<x;i++){
            if (x%i==0){
                prime=0;
                break;

            }
        }
        if (prime)
            printf("%d\n",x);

    }

}
