#include<stdio.h>
int main(){
	float r;
	float volume;
	printf("Enter the value of r:");
	scanf("%f",&r);
	volume=(4/3.0)*3.14*r*r*r;
	printf("Volume=%f",volume);
	return 0;
}
