include<stdio.h>


#include<math.h>

int main()

{

int n;

float x,y;



printf("\n Enter value to x and n: ");

scanf("%f %d", &x, &n);

switch(n)

{

case 1: y = 1+x;

break;

case 2: y = 1+x/n;

break;

case 3:

y=1+ pow(x, n);

break;

default:

y = 1 + n * x;

break;



}

printf("\n Value of y(x, n) = %6.2f",y);

return 0;

}
