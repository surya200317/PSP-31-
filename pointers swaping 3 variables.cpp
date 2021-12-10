#include<stdio.h>
int main()
{
	int a,b,k,*r,*c,*d,some;
	printf("enter the value of a,\nb and \nk\n");
	scanf("%d%d%d",&a,&b,&k);
	
	printf("before swaping\na=%d\nb=%d\nk=%d\n",a,b,k);
	
	c=&b;
	d=&a;
	r=&k;
	
	some=*r;
	*r=*d;
	*c=*c;
	*d=some;
	printf("after swaping\na=%d\nb=%d\nk=%d\n",a,b,k);
	return 0;
}
