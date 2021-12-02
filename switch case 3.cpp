#include<stdio.h>
int main()
{
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	switch(num<0)
	{
	case 0:
	printf("Given number is negative%d");
	break;
	switch(num>0)
    case 0:
	printf("Given number is positive%d");
	break;
	case 1:
	printf("given number is 0");
	break;
	default:
		printf("Invalid");
	}
	return 0;
}
	
	
