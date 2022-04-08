#include<stdio.h> // Declaration of header file
int main()
{
	int num1, num2;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &num1, &num2);  
    //Converts negative integers to positive
    num1 = (num1 < 0) ? -num1 : num1;  
    num2 = (num2 < 0) ? -num2 : num2;  
  
    printf("\nGreatest Common Divisor of %d and %d is ", num1, num2);  
  
    while(num1 != num2)  
    {  
        if(num1 > num2)  
        {  
            num1 = num1 - num2;  
        }  
        else  
        {  
            num2 = num2 - num1;  
        }  
    }  
  
    printf("%d.\n", num1);  
  
    return 0;  
}