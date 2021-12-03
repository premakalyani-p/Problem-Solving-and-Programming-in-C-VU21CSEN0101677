#include<stdio.h>
int main()
{
	int a;

	printf("Enter any Number: ");
	scanf("%d",&a);

	switch(a > 0)
	{
		case 1 : printf("Number is Positive");
				 break;

		case 0 : if(a < 0)
				 {
				 	printf("Number is Negative");
				 }
				 else
				 {
				 	printf("Number is Zero");
				 }
				 break;
	}

	return 0;
}