#include<stdio.h>
void add();
void subs();
void main()
{
	printf("function ");
	add();
	subs();
}
	void add()
	{
		int c,a,b;
		
		printf("enter value a and b:");
		scanf("%d %d",&a,&b);
		c=a+b;
		printf("the value is %d",c);
	}
	
	void subs()
	{
		int v,n,m;
		printf("\nenetr value of n and m:");
		scanf("%d %d",&n,&m);
		v=n-m;
		printf("the value is %d",v);
	}
