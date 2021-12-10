#include<stdio.h>
int main(){
	float a,b,c;
	float volume;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Enter the value of c:");
	scanf("%f",&c);
	volume=(4/3.0)*3.14*a*b*c;
	printf("Volume=%f",volume);
	return 0;
}
