#include<stdio.h>
int EvenOdd();
int main()
{
int no=12;
int res=EvenOdd(no);
if(res==1)
{
	printf("even");
}
else
{
	printf("odd");
}
}
int EvenOdd(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else
	return 0;
}

