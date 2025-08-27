#include<stdio.h>

struct HR
{
	int id;
	char name[20];
	int salary;
    double commission;
};
int main()
{

struct HR hr1,hr2;
	printf("enter id name and salary commission for hr1");
	scanf("%d",&hr1.id);
	scanf("%s",&hr1.name);
	scanf("%d",&hr1.salary);
	scanf("%lf",&hr1.commission);
	
	printf("enter id name and salary commission for hr2");
	scanf("%d",&hr2.id);
	scanf("%s",&hr2.name);
	scanf("%d",&hr2.salary);
	scanf("%lf",&hr2.commission);
	
	printf("id=%d name=%s salary=%d\n commission=%lf",hr1.id,hr1.name,hr1.salary,hr1.commission);
	printf("id=%d name=%s salary=%d\n commission=%lf",hr2.id,hr2.name,hr2.salary,hr2.commission);
}