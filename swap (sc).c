#include <stdio.h>
int main()
{
    char ch;ch=0;
int a,b,c;
printf("enter your choice");
scanf("%c",&ch);
printf("enter the value f a");
scanf("%d",&a);
printf("enter the value f b");
scanf("%d",&b);
printf("enter the value f c");
scanf("%d",&c);

switch(ch)
{
    case '1':
a=b;
printf("%d",a);
break;
case '2':
b=c;
printf("%d",b);
break;
case '3':
c=a;
printf("%d",c);
break;
default:
printf("choose your choice again");
}
return 0;

}