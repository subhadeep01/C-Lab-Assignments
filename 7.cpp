#include<stdio.h> // Declaration of header file
int main()
{
	int n;
	printf("Enter the value of N \n");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		sum=sum-i;
		else
		sum=sum+i;
	}
	printf("Sum = %d",sum);
	return 0;
}
