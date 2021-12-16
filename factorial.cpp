#include <stdio.h>
int main()
{
int number;
int i;
unsigned long factorial=1;
printf(" Enter Number : ");
scanf("%d", &number);
for (i = 1; i <= number ; i++) {
      factorial = factorial * i;    
  }
  printf("\n\n %d! = %lu",number,factorial);
    return 0;
    
}
