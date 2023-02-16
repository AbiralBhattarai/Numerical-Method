#include<stdio.h>
#include<conio.h>
#include<math.h>

//#define g(x) pow((3*x-1),(1/3.0))
//#define g(x) (2-sin(x))/3
float g(float x){
	return (2-sin(x))/3;
}
void main(){
	float x0,e,x1,test;
	printf("Enter value of x0 and E");
	scanf("%f%f",&x0,&e);
	do{
		x1 = g(x0);
		test = (x1-x0)/x1;
		printf("%.4f\n",x1);
		x0 = x1;
	}while(fabs(test)>e);
	printf("root is  %.4f",x1);
	printf("\n%.4f",fabs(round((sin(x1)+3*x1-2))));

} 
