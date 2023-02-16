#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x){
	return x*tan(x)-1;
}
float g(float y){
	return tan(y)+y*(1/(cos(y)*cos(y)));
}
int main(){
	float x0,x1,x2,e;
	int i=0;
	printf("enter x0 ");
	scanf("%f",&x2);
	printf("\n enter error: ");
	scanf("%f",&e);
	do{
		x0=x2;
		x1=x0-(f(x0)/g(x0));
		x2=x1;
		i++;
	}while(fabs((x1-x0)/x1)>e);
	printf("root is %f\n",x1);
	printf("iteration= %d ",i);
	getch();
	return 0;
}


