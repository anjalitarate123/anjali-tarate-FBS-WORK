#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	int salary;
};

int main()
{
	struct employee emp1,emp2;
	
	printf("enter id name and salary for emp1");
	scanf("%d",&emp1.id);
	scanf("%s",&emp1.name);
	scanf("%d",&emp1.salary);
	
	printf("enter id name and salary for emp2");
	scanf("%d",&emp2.id);
	scanf("%s",&emp2.name);
	scanf("%d",&emp2.salary);
	
	printf("id=%d name=%s salary=%d\n",emp1.id,emp1.name,emp1.salary);
	printf("id=%d name=%s salary=%d\n",emp2.id,emp2.name,emp2.salary);
}
	