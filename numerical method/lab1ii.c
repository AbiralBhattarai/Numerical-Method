#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}

int main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Values before swapping : a = %d & b = %d\n",a,b);
	swap(&a,&b);
	printf("Values after swapping : a = %d & b = %d ",a,b);
	return 0;
}
