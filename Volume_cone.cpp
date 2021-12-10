#include<stdio.h>
int main(){
	float r,h;
	float volume;
	printf("Enter the value of r:");
	scanf("%f",&r);
	printf("Enter the value of h:");
	scanf("%f",&h);
	volume=(1/3.0)*3.14*r*r*h;
	printf("Volume=%f",volume);
	return 0;
}
