#include<stdio.h>
int main(){
	float l,w,h;
	float volume;
	printf("Enter the value of length:");
	scanf("%f",&l);
	printf("Enter the value of width:");
	scanf("%f",&w);
	printf("Enter the value of height:");
	scanf("%f",&h);
	volume=(1/3.0)*l*w*h;
	printf("Volume=%f",volume);
	return 0;
}
