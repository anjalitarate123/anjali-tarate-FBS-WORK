#include<stdio.h>
int main()
{
	int n, i ;
	printf("enter number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("alternate elements are \n");
	for(i=0; i<n; i+=2)
	{
		printf("%d",arr[i]);
	}
}
	
	