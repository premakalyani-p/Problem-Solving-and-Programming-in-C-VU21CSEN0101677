#include<stdio.h>
int main()
{
    char ch;ch=0;
int wages;
double days,basic,HRA,DA,PF,netsalary;
printf("enter your choice:");
scanf("%c",&ch);
printf("Enter daily wages and number of days worked:");
scanf("%d %lf",&wages,&days);
switch(ch)
{
   case '1':
basic=wages*days;
printf("%lf",basic);
break;
case '2':
HRA=wages*days*0.1;
printf("%lf",HRA);
break;
case '3':
DA=wages*days*0.05;
printf("%lf",DA);
break;
case '4':
PF=wages*days*0.12;  
printf("%lf",PF);
break;
case '5':
netsalary=wages*days+wages*days*0.1+wages*days*0.05-wages*days*0.12;
printf("%lf,netsalary");
break;
default:
printf("enter correct choice");



}



    return 0;
}