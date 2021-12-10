#include<stdio.h>
int main()
{
	int *p,a;
	p=&a;
	printf("%d",a);
	printf("%\n%d",&a);
   printf("\n%p",a);
   return 0;
}

