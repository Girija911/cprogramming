#include<stdio.h>
int main()
{
	int x=1,fact=1,n;
	printf("enater a number to find factorial:");
	scanf("%d",&n);
	while(x<=n)
	{ fact=fact*x;
	x++;
	}
	printf("factorial of %d is :%d",n,fact);
	return 0;
}
