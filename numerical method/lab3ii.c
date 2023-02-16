#include<stdio.h>
#include<conio.h>
#include<math.h>
double f(double x){
	return(pow(x,2)-4*x-10);
}

void main(){
	double x0,x1,x2,c,e;
	int step = 1;
	scanf("%lf%lf",&x0,&x1);
	printf("Enter error: ");
	scanf("%lf",&e);
	c = (x2-x1)/x2;
	while(fabs(c)<e){
		//f0 = f(x0);
		//f1 = f(x1);
		printf("\nSTEP : %d \n",step);
		x2 = x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
		x0 = x1;
		x1 = x2;
		c = (x2-x1)/x2;
		printf("\n%lf\n",x2);
		step++;
	};
	printf("root is %lf",x2);
	printf("\nprogram executed!");
}
