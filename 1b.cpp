#include<stdio.h> // Declaration of header file
int main()
{
	int n;
	printf("Enter value of N \n");
	scanf("%d",&n);
	int max=0;
	int val;
	for(int i=1;i<=n;i++)
	{
		int c=0;
		printf("Factors of %d are\n",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			c++;
		    printf("%d\n",j);
	    	}
	    }
		if(c>max)
		{		
		max=c;
		val=i;
      	}
	}
	printf("The Number with Maximum Factors is %d",val);
	return 0;
}