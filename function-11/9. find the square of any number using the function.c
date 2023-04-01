//9. Write a program in C to find the square of any number using the function

#include<stdio.h>
int square(int n);
int main()
{
	int n,result;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	result=square(n);
	printf("Square of %d is = %d ",n,result);
	return 0;
}
int square(int n)
{
	int square;
	square=n*n;
	return square;
}
