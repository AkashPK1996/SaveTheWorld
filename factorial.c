#include<stdio.h>

int fact(int n)
{
	if(n<=1)
		return 1;
	return n*fact(n-1);	
}

void main()
{
	int f, num, i;
	printf("Enter a Number : ");
	scanf("%d",num);
	f = fact(num);
	printf("Factorial      : ");
}
