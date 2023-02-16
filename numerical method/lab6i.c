#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y){
	return pow(y,2)+2*x-pow(x,4);
}
int main(){
float x,y,xp,h,z;
int i,n;
printf("x,y,xp\n");
scanf("%f%f%f",&x,&y,&xp);
scanf("%f",&h);
n = ((xp-x)/h);
for(i=0 ;i<=n;i++){
	z = f(x,y);
	y = y+h*z;
	x = x + h;
printf("x,y : %.2f\t%.2f",x,y);
}

return 0;
}
