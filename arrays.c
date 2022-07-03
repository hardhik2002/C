#include<stdio.h>
int main()
{
    int first_array[]={1,2,3,4,5};
    first_array[4]=6;
    int i=0;
    for (i ; i<5;i++)
    {
        printf("%d\n",first_array[i]);
    }
    printf("%d",first_array[4]);

}
