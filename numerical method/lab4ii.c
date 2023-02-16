#include<stdio.h>
#include<conio.h>
int main()
{
 float x[20],a[20][20],xp,p,l[100];
 int i,j,n;
 printf("Enter number of data?\n");
 scanf("%d",&n);
 printf("Enter data:\n");
 for(i = 0; i < n ; i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &a[0][i]);
 }
 printf("Enter interpolation value: ");
 scanf("%f",&xp);
 for(i=1;i<n;i++){
 	for(j=0;j<n-i;j++){
 		a[i][j] = (a[i-1][j+1]-a[i-1][j])/(x[i+j]-x[j]);
	 }
 }
 p = a[0][0];
 for(i=1;i<n;i++){
 	l[i] = 1;
 	for(j=0;j<i;j++){
 		l[i] = l[i]*(xp-x[j]);
	 }
	 p = p + a[i][0]*l[i];
 }
 printf("Interpolated value is %.3f",p);
return 0;
}

