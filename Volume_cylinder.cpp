#include<stdio.h>
int main(){
	float r,h;
	float volume;
	printf("Enter the radius:");
	scanf("%f",&r);
	printf("Enter the height:");
	scanf("%f",&h);
	volume=3.14*r*r*h;
	printf("Volume=%f",volume);
	return 0;
}
