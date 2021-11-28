#include <stdio.h>
int main()
{
   int a,b,c;
    printf("enter a number a ");
    scanf("%d",&a);
    printf("enter a number b ");
    scanf("%d",&b);
     c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    if(a>=b)
    { printf("a is greater than b");}
    else
    { printf("a is less than b");}
    return 0;
}