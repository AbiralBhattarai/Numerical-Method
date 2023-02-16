#include<stdio.h>
#include<conio.h>

#define f(x) 1+pow(x,3)
int main(){
	float sum=0.0,ans,h,I=0.0;
	int i,j,a,b,n;
	printf("Enter lower and upper limit ");
	scanf("%d%d",&a,&b);
	printf("Enter number of strips: ");
	scanf("%d",&n);
	h=((float)b-(float)a)/(float)n;
	for(i=1;i<n;i++){
		if(i%2 != 0){
			sum =sum + 4*f(a+i*h);
		}else{
			sum =sum +  2*(a+i*h);
		}
	}
	I = (h/3)*(f(a)+sum+f(b));
	printf("%f",I);
}

