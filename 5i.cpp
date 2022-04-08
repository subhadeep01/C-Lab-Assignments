#include<stdio.h> // Declaration of header files
#include<math.h>
int main()
{
	int a,b,c;
	int d;
	float x,y;
	printf("Enter the value of coefficients a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
        d=(b*b)-4*a*c;
        printf("Equation is (%d)x^2+(%d)x+(%d)= 0\n",a,b,c);
        if(d>=0)
        {
        printf("Roots are real\n");
	x=(-b+sqrt(d))/(2*a);
	y=(-b-sqrt(d))/(2*a);
	printf("Roots are %.2f and %.2f\n",x,y);
        }
        else
        printf("No Real roots\n");
        return 0;
}