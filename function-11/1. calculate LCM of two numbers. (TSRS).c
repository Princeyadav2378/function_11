// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int a,int b);
int main()
{
	int a,b,result;
	printf("Enter two Number:\n");
	scanf("%d%d",&a,&b);
	result=LCM(a,b);
	printf("LCM of %d and %d is = %d",a,b,result);
	return 0;
}
int LCM(int a,int b)
{
	int max;
	max=a>b?a:b;
	while(1)
	{
		if((max%a==0)&&(max%b==0)){
		     return max;
	       }
	       max++;
	}
	
}
