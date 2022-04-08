#include <stdio.h> // Declaration of header file
int main()
{
    int num1, num2, i, GCD;

    printf("Enter two integer Values \n");
    scanf("%d %d", &num1, &num2);
    // Converts negative integers into positive
     num1 = (num1 < 0) ? -num1 : num1;  
    num2 = (num2 < 0) ? -num2 : num2;  

    for(i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            GCD = i;
    }

    printf("GCD of %d and %d is = %d", num1, num2, GCD);
    return 0;
}