#include<stdio.h>

struct distance
{
	int feet;
	float inch;
};
int main()
{
	struct distance d1;
	printf("enter the feet and inch of d1");
	scanf("%d",&d1.feet);
	scanf("%f",&d1.inch);
	
	printf("fee=%d" "inch=%f" , d1.feet,d1.inch);
}