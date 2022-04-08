#include <stdio.h> // Declaration of header file
int main()
{
    int n,i,j;
    printf("Enter the value of N\n");
    scanf("%d",&n);

    int prime[n+1];

    //populating array with naturals numbers
    for(i = 2; i<=n; i++)
	{
        prime[i] = i;
    }
    i = 2;
    while ((i*i) <= n)
    {
        if (prime[i] != 0)
        {
            for(j=2; j<n; j++)
            {
                if (prime[i]*j > n)
                    break;
                else
                    // Instead of deleting , making elements 0
                    prime[prime[i]*j]=0;
            }
        }
        i++;
    }
     printf("Prime numbers from 2 to N are:\n");
    for(i = 2; i<=n; i++)
    {
        //If number is not 0 then it is prime
        if (prime[i]!=0)
            printf("%d\n",prime[i]);
    }

    return 0;
}