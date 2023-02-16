#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-4*x-10

int main(){	
	float x0,x1,x2,f0,f1,f2,e;
	up:
	printf("Enter two initial guesses:");
	scanf("%f%f",&x1,&x2);
	printf("Enter error:");
	scanf("%f",&e);
	f1 = f(x1);
	f2 = f(x2);
	if( f2*f1>0){
		goto up;
	}
	do{
		x0 = x1 -(x1-x2) *f1/(f1-f2);
		f0 = f(x0);
		printf("%f\n",x0);
		if(f0*f1 < 0){
			x2 = x0;
			f2 = f0;
		}
		else{
			x1 = x0;
			f1 = f0;
		}
	}while(fabs(f0)>e);
	printf("\nRoot is: %f", x0);
	return 0;
}
