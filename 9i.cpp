#include<stdio.h> // Declaration of header file
bool Div(int n)// Function to check odd or even by division
{
	if(n%2==0)
	return true;
	else
	return false;
}
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("Checking by Division\n");
	if(Div(n)==true)
	printf("Even\n");
	else
	printf("Odd\n");
	return 0;
}
