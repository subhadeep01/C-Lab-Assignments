#include<stdio.h> // Declaration of header file
int gcd(int a,int b)// Function to calculate GCD between two numbers
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int findGCD(int arr[], int n) // Function to find GCD
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 
  
int main()
{
	int n;
	printf("Enter how many numbers\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("GCD of the above %d numbers = %d\n",n,findGCD(a,n));
	return 0;
}
