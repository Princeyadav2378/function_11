//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int a,int b);
int main()
{
	int a,b,result;
	printf("Enter two Number:\n");
	scanf("%d%d",&a,&b);
	result=HCF(a,b);
	printf("HCF of %d and %d is = %d",a,b,result);
	return 0;
}
int HCF(int a,int b)
{
	int min,i;
	min=a<b?a:b;
	for(i=min;i>0;i--)
	{
		if((a%i==0)&&(b%i==0))
		{
		     break;
	       }
	}
	return i;
	
}
