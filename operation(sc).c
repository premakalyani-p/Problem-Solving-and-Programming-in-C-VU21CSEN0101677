# include <stdio.h>
int main()
{
	int a,b,c,d,e,ch;
	ch=0;
	float f;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		
	case 1:
		c=a+b;
		printf("%d",c);
		break;
		case 2:
		d=a-b;
		printf("%d",d);
		break;
		case 3:
		e=a*b;
		printf("%d",e);
		break;
		case 4:
		f=a/b;
		printf("%0.2f",f);
		break;
		default:
		printf("'enter ur choice again'");
	}
		return 0;
		


	
	

}