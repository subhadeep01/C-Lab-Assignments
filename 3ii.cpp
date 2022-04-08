#include<stdio.h> // Declaration of header file
long long int recursiveFactorial(int n)// Function to calculate factorial recursively 
{
	if(n==1)
	return 1;
	else
	return n*recursiveFactorial(n-1);
}
int main()
{
	long long int n;
	printf("Enter a number\n");
	scanf("%d",&n);
        long long int f1 = recursiveFactorial(n);
	printf("Factorial using Recursion\n");
	printf("%lld\n",f1);
	return 0;
}
