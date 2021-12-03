# include <stdio.h>
int main()
{
    char ch;ch=0;
    int hr,min,s,km,m,cm,l,b,h,a,v,C;
    float F;
    printf("Enter your choice ");
    scanf("%c",&ch);
    switch(ch)
    {case '1':
    printf("Enter time in hours ");
    scanf("%d",&hr);
    min=hr*60;
    printf("Time in minutes is ");
    printf("%d min",min);
    s=min*60;
    printf("\n Time in seconds is ");
    printf("%d sec",s);
    break;
    case '2':
     printf("\n\n Enter distance in km ");
    scanf("%d",&km);
    m=km*1000;
     printf("Distance in m is ");
    printf("%dm",m);
    cm=m*100;
     printf("\n Distance in cm is ");
    printf("%dcm",cm);
    break;
    case '3':
    printf("\n\n Enter length ");
    scanf("%d",&l);
    printf("Enter breadth ");
    scanf("%d",&b);
    a=l*b;
    printf("Area =");
    printf("%d",a);
    break;
    case '4':
    printf("\n\n Enter length ");
    scanf("%d",&l);
    printf("Enter breadth ");
    scanf("%d",&b);
    printf("\n\n Enter height ");
    scanf("%d",&h);
    v=l*b*h;
    printf("Volume =");
    printf("%d",v);
    break;
    case '5':
    printf("\n\n Enter temperature in C ");
    scanf("%d",&C);
    F=((C*9)/5)+32;
    printf("Temperature in F is");
    printf("%0.2f",F);
    break;
    default:
    printf("Enter a valid choice");
    }
    return 0;
}
------------------------------------------
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