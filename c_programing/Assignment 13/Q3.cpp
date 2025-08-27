#include<stdio.h>

struct admin
{
	int id;
	char name[20];
	int salary;
	double allowance;
};
int main()
{
	struct admin ad1;
	printf("enter id name and salary allowance for ad1");
	scanf("%d",&ad1.id);
	scanf("%s",&ad1.name);
	scanf("%d",&ad1.salary);
	scanf("%lf",&ad1.allowance);
	
	printf("id=%d name=%s salary=%d allowance=%lf\n",ad1.id,ad1.name,ad1.salary,ad1.allowance);
}