//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function

#include<stdio.h>
int sum_series(int n);
int factorial(int n);
int main()
{
	int n,result;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	result=sum_series(n);
	printf("sum of series is %d ",result);
	return 0;
}
int sum_series(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	sum=sum+(factorial(i)/i);
	return sum;
}
int factorial(int n)
{
	int i,fact=1;
	for(i= 1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
