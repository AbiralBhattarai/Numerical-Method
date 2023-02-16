#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1+pow(x,3)
int main(){
	int a,b,n,i,j,sum=0;
	float h,I=0.0;
	printf("Enter upper and lower limit of integration:\n ");
	scanf("%d%d",&a,&b);
	printf("input no of step required: ");
	scanf("%d",&n);
	h = ((float)b-(float)a)/((float)n);
	for(i=1;i<n;i++){
			sum = sum + f(a+i*h);
	}
	I = (h/2)*(f(a)+f(b)+2*(float)sum);
	printf("%f\t%f",f(a),f(b));
	printf("\nResult = %f",I);
	return 0;
	
}

