#include<stdio.h>
int main(){
	float h,a,b;
	float area;
	printf("Enter the height:");
	scanf("%f",&h);
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	area=(h/2)*(a+b);
	printf("Area=%f",area);
	return 0;
}
