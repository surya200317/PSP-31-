#include<stdio.h>
#include<math.h>
int main()
{
 float ar,r,cir;
char n;
printf("enter a for area c for cir");
 printf("enter your choice");
 scanf("%c",&n);
 
 printf("enter the value of radius");
 scanf("%f",&r);
 
 switch(n)
 {
case 'a':
ar=3.14*r*r;
printf("%0.2f",ar);
break;

case 'c':
cir=2*3.14*r;
printf("%0.2f",cir);
break;
 default :
printf(" enter valid choice");
 }
 return 0;
}
 
 
