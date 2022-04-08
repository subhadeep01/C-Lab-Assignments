#include<stdio.h> // Declaration of header files
#include<math.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Check from 2 to SQRT(N)\n"); // Check from 2 to SQRT(N)
    	int c1=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		c1++;
	}
	if(c1==0)
	printf("Number is Prime\n");
	else
        printf("Number is not Prime\n");
    return 0;
}