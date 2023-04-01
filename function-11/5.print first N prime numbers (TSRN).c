// 5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void N_prime(int a);
int main()
{
	int a;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	N_prime(a);
	return 0;
}
void N_prime(int a)
{
	int i,n,flag=0;
	for(n=1;n<=a;n++)
	{
		flag=0;
	for(i=2;i<=n/2;i++)
	  {
		if(n%i==0)
		  flag=1;
	  }
	  if(flag==0)
	  printf(" %d",n);
      }
}
