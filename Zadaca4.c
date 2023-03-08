#include <stdio.h>
int main ()
{
    int a,b,c,sum=0,avg,p=1;
    printf("Vnesi tri celi broevi\n");
    scanf("%d %d %d ",&a,&b,&c);
    sum= a+b+c;
    p=a*b*c;
    avg=sum/3;
    printf("Sumata na broevite e %d, proizvodot e %d i celobrojna sredna vrednost e %d \n",sum,p,avg);
    return 0;
}