#include<stdio.h>

struct time
{
	int hour;
	float min;
	float sec;
};
int main()
{
	struct time t1;
	
	printf("enter the hour min and sec of t1");
	scanf("%d",&t1.hour);
	fflush(stdin);
	scanf("%f1",&t1.min);
	scanf("%f1",&t1.sec);

	
	printf("hour=%d" "%f1=min" "%f1=sec", t1.hour ,t1.min, t1.sec);
}