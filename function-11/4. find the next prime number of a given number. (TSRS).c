// 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int next_prime(int a);
int main()
{
	int a,result;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	result=next_prime(a);
	printf("Next Prime Number is %d ",result); 
	return 0; 
}
int next_prime(int a)
{
	int j,i,flag=0;
	for(i=a+i;1;i++)
     {
     	flag=0;
	for(j=2;j<=i/2;j++)
	{
	   if(i%j==0)
	    {
	       flag=1;
	       break;
           }
        
	}
	if(flag==0)
	return i;
     }
}
