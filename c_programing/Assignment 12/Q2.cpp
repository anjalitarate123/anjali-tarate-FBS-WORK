#include<stdio.h>
int main()
{
	char str[100];
	
	printf("enter a string");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
		str[i]='$';
	}
	printf("modified string %s",str);
}