#include <stdio.h>

int main() {
   char ch;ch=0;
    int sub1,sub2,sub3,sub4,sub5,total;
    float avg,percentage;
    printf("Enter your choice ");
    scanf("%c",&ch);
    printf("Enter value of sub1 ");
    scanf("%d",&sub1);
    printf("Enter value of sub2 ");
    scanf("%d",&sub2);
    printf("Enter value of sub3 ");
    scanf("%d",&sub3);
    printf("Enter value of sub4 ");
    scanf("%d",&sub4);
    printf("Enter value of sub5");
    scanf("%d",&sub5);
       switch(ch)
    {
    case '1':
    total=sub1+sub2+sub3+sub4+sub5;
    printf("%d",total);
    break;
    case '2':
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("%0.2f",avg);
    break;
    case '3':
    percentage=((sub1+sub2+sub3+sub4+sub5)/5)*100;
    printf("%0.2f",percentage);
   break;
   default:
   printf("enter the correct choice");  
    }
    return 0;
}