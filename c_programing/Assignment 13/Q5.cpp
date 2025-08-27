#include<stdio.h>

struct salesmanager
{
	int id;
	char name[20];
	int salary;
    double insentive;
    float target;
};
int main()
{

struct salesmanager s1,s2;
	printf("enter id name  salary insentive target for s1");
	scanf("%d",&s1.id);
	scanf("%s",&s1.name);
	scanf("%d",&s1.salary);
	scanf("%d",&s1.insentive);
	scanf("%d",&s1.target);
	

	printf("enter id name  salary insentive target for s2");
	scanf("%d",&s2.id);
	scanf("%s",&s2.name);
	scanf("%d",&s2.salary);
	scanf("%d",&s2.insentive);
	scanf("%d",&s2.target);
	
		printf("id=%d name=%s salary=%d\n insentive=%d target=%d\n",s1.id, s1.name, s1.salary, s1.insentive, s1.target);
		printf("id=%d name=%s salary=%d\n insentive=%d target=%d\n",s2.id, s2.name, s2.salary, s2.insentive, s2.target);
}