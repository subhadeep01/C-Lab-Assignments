#include<stdio.h> //Declaration of header file
int main()
{
	register int r;
	r=~0;
	int c=0;
	do
	{
		c++;
	}while(r=(unsigned)r>>1);
	printf("Size of register of my PC's processor = %d bits",c);
	return 0;
}