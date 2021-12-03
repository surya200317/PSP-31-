#include<stdio.h>
int main()
{
int yr;
printf("enter the year");
scanf("%d",&yr);
if(yr%4==0)
{
printf("given year is leap year");
}
else
{
printf("given year is not a leap year");
}
return 0;
}
