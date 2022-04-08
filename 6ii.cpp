#include<stdio.h> // Declaration of header files
#include<math.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
        printf("Check from 2 to N/2 \n"); // Check from 2 to N/2
    	int count=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==0)
	printf("Number is Prime\n");
	else
        printf("Number is not Prime\n");

  return 0;
}