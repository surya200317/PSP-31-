#include<stdio.h>
#include<math.h>
int main()
{
	int a,i=1,c;
	c=a*i;
	printf("enter the number");
	scanf("%d",&a);
	while(i<=20)
	{
		printf(" %d*%d=%d\n",a,i,c);
		i++;
	}
	return 0;
}
