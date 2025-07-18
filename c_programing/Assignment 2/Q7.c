#include<stdio.h>
int main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age<12)
	{
		printf("child\n");
	}
	else if (age>=12 && age<=19)
	{
		printf("teenager\n");
	}
	else if(age>=20 && age<=59)
	{
		printf("adult\n");
	}
	else if(age>=60)
	{
		printf("senior\n");
	}
	else
	{
		printf("invalid age\n");
	}
	return 0;
}

	
		
	
	
	
