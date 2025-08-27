#include<stdio.h>

struct student
{
	int rollno;
	char name[20];
	int marks;
};

int main()
{
	struct student s1,s2;
	
	printf("enter rollno name and marks for student 1");
	scanf("%d",&s1.rollno);
	scanf("%s",&s1.name);
	scanf("%d",&s1.marks);
	
	printf("enter rollno name and marks for student 2");
	scanf("%d",&s2.rollno);
	scanf("%s",&s2.name);
	scanf("%d",&s2.marks);
	
	printf("rollno=%d name=%s marks=%d\n",s1.rollno,s1.name,s1.marks);
	printf("rollno=%d name=%s marks=%d\n",s2.rollno,s2.name,s2.marks);
}
	