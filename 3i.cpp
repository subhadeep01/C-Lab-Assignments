#include<stdio.h> // Declaration of header file
long long int iterativeFactorial(int n)// Function to calculate factorial iteratively
{
	long long int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	long long int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Factorial using Iteration\n");
	long long int f = iterativeFactorial(n);
	printf("%lld\n",f);
        return 0;
}