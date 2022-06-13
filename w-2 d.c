# include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,delta,deno,root1,root2;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    delta=(b*b)-4*a*c;
    deno=2*a;
    if (delta>0)
    {
        printf("Real roots:\n");
        root1=-b+sqrt(delta)/deno;
        root2=-b-sqrt(delta)/deno;
        printf("%d,%d",root1,root2);

    }
    else if(delta==0){
            printf("Equal roots:\n");
            root1=-b/deno;
            printf("%d,%d",root1,root2);


    }
    else{
        printf("Imaginary roots");
    }
}
