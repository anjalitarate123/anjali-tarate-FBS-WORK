#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides of the triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
	
	if(a==b && b==c)
	{
		printf("the triangle is eduilatral\n");
	}
	else if(a==b || b==c || c==a)
	{
		printf("the triangle is isosclenes\n");
	}
	else
	{
		printf("the triangle is scalene\n");
	}
	
}
    else
    {
    	printf("the given sides do not form a triangle\n");
    }
    return 0;
	}
	
	
