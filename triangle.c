#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("enter the value of c \n");
    scanf("%d",&c);
    if(a==b&&b==c)
    {
        printf("it is an equilateral triangle");
    }
    else if (a==b&&b!=c)
    {
        printf("it is an isosceless triangle");
    }
    else
    {
        printf("it is a scalane triangle");
    }
    return 0;
}