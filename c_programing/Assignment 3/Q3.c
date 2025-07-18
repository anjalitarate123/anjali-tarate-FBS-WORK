#include<stdio.h>
int main()
{
	int start,end,sum =0;
	printf("enter start number");
	scanf("&d",&start);
	printf("enter end numbers");
	scanf("&d",&end);
	for(int i = start; i<=end; i++)
	{
		sum +=i;
	}
	printf("sum = %d\n",sum);
	return 0;
}
	