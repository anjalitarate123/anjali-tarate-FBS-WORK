#include<stdio.h>
int main()
{
	int n,i ,sum=0;
	printf("enter number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		sum +=arr[i];
	}
	printf("sum = %d\n",sum);
}
	
