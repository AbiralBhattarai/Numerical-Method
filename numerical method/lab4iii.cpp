#include<stdio.h>
int main()
{
	float x[10],y[10],sumx=0,sumy=0,sumxy=0,a,b,sumxx=0;
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter X: ");
		scanf("%f",&x[i]);
		printf("Enter Y: ");
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sumxx=sumxx+x[i]*x[i];
		sumx=sumx+x[i];
		sumxy=sumxy+x[i]*y[i];
		sumy=sumy+y[i];
		b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
		a=(sumy-b*sumx)/n;
		printf("a=%f\nb=%f\n",a,b);
		printf("Value of p at w=%f\n",(a+b*150));
	}
}
