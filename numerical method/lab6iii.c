#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y){
	return 1+3*x*x;
}
int main(){
float x,y,xp,h,m1,m2,m3,m4;
int i,n;
printf("x,y,xp\n");
scanf("%f%f%f",&x,&y,&xp);
scanf("%f",&h);
n = ((xp-x)/h);
for(i=1 ;i<=n;i++){
	m1 = f(x,y);
	m2 = f(x+h/2,y+h/2*m1);
	m3 = f(x+h/2,y+h/2*m2);
	m4 = f(x+h,y+h*m1);
	y = y+(m1+2*m2+2*m3+m4)/6*h;
	x = x + h;
	printf("\nx,y : %f\t%f",x,y);
}

return 0;
}
