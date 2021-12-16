#include<stdio.h>
#include<math.h>
int main()
{
int sk; 
float a,b,c,d,f,h;
printf("enter your choice");
scanf("%d",&sk);
a=4;
b=3;

switch(sk)

{
add:
case 1:
c=a+b;
printf("%f",c);
break;

case 2:
d=a-b;
printf("%f",d);
break;

case 3:
f=a/b;
printf("%.1f",f);
break;

case 4:
h=a*b;
printf("%f",h);
break;

default:
	printf("please enter the correct value");
	
	return 0;
	
}
}
