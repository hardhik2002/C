#include<stdio.h>
int main()
{
    int cost,selling;
    scanf("%d %d",&cost,&selling);
    if (selling>cost)
        printf("Profit");
    else
            printf("Loss");
}
