#include<stdio.h> // Declaration of header file
bool Bit(int n) // Function to check odd or even by bit testing
{
    // n^1 is n+1, then even, else odd
    if ((n ^ 1)== n + 1)
        return true;
    else
        return false;
}
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("Checking using Bit Testing\n");
	if(Bit(n)==true)
	printf("Even\n");
	else
	printf("Odd\n");
	return 0;
}
