#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (1+pow(x,3))
int main()
{
 float a, b, inte=0.0, h, k;
 int i,n;
 printf("Enter lower limit of integration: ");
 scanf("%f", &a);
 printf("Enter upper limit of integration: ");
 scanf("%f", &b);

 h = (b-a)/3;
inte = f(a) + f(b) + 3*f(a+h) + 3*f(a+2*h);

 inte *= (3*h)/8;
 printf("\nRequired value of integration is: %.3f", inte);
 return 0;
}

