#include <stdio.h>
int main()
{
    int h,m,s;
    printf("Enter time in hours ");
    scanf("%d",&h);
    m=h*60;
    printf("Time in minutes is ");
    printf("%d min",m);
    s=m*60;
    printf("\n Time in seconds is ");
    printf("%d sec",s);
    return 0;
}