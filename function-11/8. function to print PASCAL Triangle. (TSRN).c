// 8. Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>
int factorial(int);
int combi(int,int);
void pascal(int a);
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;   //factorial of a Number
	}
	return fact;
}
int combi(int n,int r)
{
	return (factorial(n)/(factorial(r)*factorial(n-r))); //combination of two Number
}
void pascal(int line)
{
	int i,j,k,r;
	for(i=1;i<=line;i++)
	{
		k=1;
		r=0;
		for(j=1;j<=2*line-1;j++)
		{
			if(j>=line+1-i && j<=line-1+i && k)
			{
				printf("%d",combi(i-1,r));
				k=0;
				r++;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}
int main()
{
	int a;
	printf("Enter the Number:\n");       //Print the message
	scanf("%d",&a);              //User input
	pascal(a);    //call by value
}


