#include<stdio.h>
#include<conio.h>
int sum(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The sum is %d",sum(a,b));
	return 0;
}

