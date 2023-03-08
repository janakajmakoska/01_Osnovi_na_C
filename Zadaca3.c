#include <stdio.h>
int main ()
{  
    int a=1,b=2,c=3,d=4;
    printf("1 2 3 4\n"); /*zadaca3 pod a so 1 printf bez specifikatori*/
    printf("%d %d %d %d\n",a,b,c,d); /*zadaca3 pod b so 1 printf so 4 specifikatori*/
    printf("%d\n",a);
    printf("%d\n",b);/*pov v so 4 printf*/
    printf("%d\n",c);
    printf("%d\n",d);
    
    return 0;
}