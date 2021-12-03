#include <stdio.h>
int main()
{
    char ch;ch=0;
int a,b,c;
printf("enter your choice");
scanf("%c",&ch);

switch(ch)
{
    case '1':
    printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
c=180-(a+b);
printf("%d",c);
break;
case '2':
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
a=180-(b+c);
printf("%d",a);
break;
case '3':
printf("enter the value f a");
scanf("%d",&a);
printf("enter the value f c");
scanf("%d",&c);
b=180-(a+c);
printf("%d",b);
break;
default:
printf("choose your choice again");
}
return 0;

}