// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int check_prime(int a);
int main()
{
	int a,result;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	result=check_prime(a);
	if(result==1)
	{
         printf("Not Prime Number");
       }   
	else
	{
	  printf("Prime Number");
	}
     return 0;
}
int check_prime(int a)
{
	int i,flag=0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
       if(flag==1)
       {
	       return 1;
       }
	else
	{
	      return 0;
       }
}
