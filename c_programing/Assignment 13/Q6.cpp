#include<stdio.h>

struct date
{
	int date;
	char month[20];
	int year;
};
int main()
{
	struct date d1;
	
	printf("enter the date month and year of d1");
	scanf("%d",&d1.date);
	scanf("%s",&d1.month);
	scanf("%d",&d1.year);

	
	printf("date=%d" "month=%s" "year=%d" ,d1.date,d1.month,d1.year);
}