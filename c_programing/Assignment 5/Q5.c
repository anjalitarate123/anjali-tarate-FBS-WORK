#include<stdio.h>
int main()
{
	int n=5;
	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=n-1; j++)
	{
		printf(" ");
	}
	for(int k=1; k<=2*i-1;k++)
	{
		printf("*");
	}
	printf("\n");
  }
}
	
	
	
	
