// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
void prime_Number(int a,int b);
int main()
{
	int a, b;
	printf("Enter Two Number:\n");
	scanf("%d%d",&a,&b);
	prime_Number(a,b);
	return 0;
}
void prime_Number(int a,int b)
{
	int i,n;
	for(n=a+1;n<=b-1;n++)
	{
		for(i=2;i<=n;i++)
		
			if(n%i==0)
			break;
		if(n==i)
	            printf(" %d",n);
		
	}
}
