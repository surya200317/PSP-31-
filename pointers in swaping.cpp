#include<stdio.h>
int main()
{
	int a,b,*c,*d,something;
	printf("enter the value of a and \nb");
	scanf("%d%d",&a,&b);
	
	printf("before swaping\na=%d\nb=%d\n",a,b);
	
	c=&a;
	d=&b;
	
	something=*d;
	*d=*c;
	*c=something;
	printf("after swaping\na=%d\nb=%d\n",a,b);
	return 0;
}
