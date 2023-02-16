#include<stdio.h>
#include<conio.h>
#define f(x) 1+x*x*x
int main(){
	int a,b;
	float h,I;
	printf("Enter upper and lower limit of integration:\n ");
	scanf("%d%d",&a,&b);
	h = b-a;
	I = h/2*(f(a)+f(b));
	printf("%d\t%d",f(a),f(b));
	printf("\nResult = %f",I);
	return 0;
	
}

