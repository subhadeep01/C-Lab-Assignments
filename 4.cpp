#include<stdio.h> // Declaration of header file
int main()
{
	int a[10];
	printf("Enter 10 numbers\n");
	for(int i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
        } 
	int max=a[0];
	int min=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		max=a[i];
	        if(a[i]<min)
		min=a[i];
	}
	printf("Maximum number in the Array = %d\n",max);
	printf("Minimum number in the Array = %d\n",min);
	return 0;
}