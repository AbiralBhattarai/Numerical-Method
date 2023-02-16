#include<stdio.h>
#include<conio.h>
void main()
{
	float x[100],y[100],xp,p=0,l[100];
	int i,j,n;
	printf("How many data: ");
	scanf("%d", &n);
	printf("Enter data:\n");
 	for(i=1;i<=n;i++){
		  printf("x[%d] = ",i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	}
	printf("Enter interpolation point: ");
	scanf("%f",&xp);
	for(i=1;i<=n;i++){
		  l[i]=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			{
			    l[i] = l[i]*(xp - x[j])/(x[i] - x[j]);
			}
		}
		p = p + l[i] * y[i];
	}
	printf("Interpolated value at %.3f is %.3f.", xp, p);
}
