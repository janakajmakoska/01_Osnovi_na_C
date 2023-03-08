#include <stdio.h>
int main(){
    int broj,a,b,c,d,e;
    printf("Vnesi 5-cifren broj \n");
    scanf("%d",&broj);
    a=broj%10;
    broj/=10;
    b=broj%10;
    broj/=10;
    c=broj%10;
    broj/=10;
    d=broj%10;
    broj/=10;
    e=broj%10;
    printf("%d   %d   %d   %d   %d\n",e,d,c,b,a);
    return 0;
}