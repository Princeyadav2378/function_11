//7. Write a function to print first N terms of Fibonacci series (TSRN)#include<stdio.h>
#include<stdio.h>
void fibonacci(int n);
int main()
{
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}
void fibonacci(int n)
{
	int cur,next=1,prev=0,i;
	printf("%d %d",prev,next);
	for(i=2;i<=n;i++)
	{
	cur=prev+next;
	printf(" %d",cur);
	prev=next;
	next=cur;
       }
}
