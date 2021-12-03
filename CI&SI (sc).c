#include <stdio.h>
#include <math.h>
 
 int main()
 {
     char ch;ch=0;
     float p,t,r,SI,CI;
     printf("enter ur choice");
     scanf("%c",&ch);
     
     printf("enter p");
     scanf("%f",&p);
     printf("enter t");
     scanf("%f",&t);
     printf("enter r");
     scanf("%f",&r);
     switch (ch)
     
    {
    case '1':
    SI=(p*t*r)/100;
  printf("%0.2f",SI);
  break;
  case '2':
  CI=p*(pow((1+r/100),t));
  printf("%0.2f",CI);
  break;
  default:
  printf("choose correct choice");
 
 
     
 }
   
    return 0;
}