#include <stdio.h>
int main()
{
    int hr,min,s,km,m,cm,l,b,h,a,v,C;
    float F;
    printf("Enter time in hours ");
    scanf("%d",&hr);
    min=hr*60;
    printf("Time in minutes is ");
    printf("%d min",min);
    s=min*60;
    printf("\n Time in seconds is ");
    printf("%d sec",s);
     printf("\n\n Enter distance in km ");
    scanf("%d",&km);
    m=km*1000;
     printf("Distance in m is ");
    printf("%dm",m);
    cm=m*100;
     printf("\n Distance in cm is ");
    printf("%dcm",cm);
    printf("\n\n Enter length ");
    scanf("%d",&l);
    printf("Enter breadth ");
    scanf("%d",&b);
    a=l*b;
    printf("Area =");
    printf("%d",a);
    printf("\n\n Enter height ");
    scanf("%d",&h);
    v=l*b*h;
    printf("Volume =");
    printf("%d",v);
    printf("\n\n Enter temperature in C ");
    scanf("%d",&C);
    F=((C*9)/5)+32;
    printf("Temperature in F is");
    printf("%0.2f",F);
    }