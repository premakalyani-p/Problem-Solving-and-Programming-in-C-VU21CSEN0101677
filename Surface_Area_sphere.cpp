#include<stdio.h>
int main(){
	float r;
	float surface_area;
	printf("Enter the value of radius:");
	scanf("%f",&r);
	surface_area=4*3.14*r*r;
	printf("Surface Area=%f",surface_area);
	return 0;
}
