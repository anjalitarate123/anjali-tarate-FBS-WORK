#include<stdio.h>
void mystrncpy(char*dest,const char*src,int n)
{
	int i;
	for(i=0; i<n && src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	for(;i<n;i++)
	{
		dest[i]='\0';
	}
}
int main()
{
	char source[100],destination[100];
	int n;
	printf("enter the source string");
	gets(source);
	printf("enter number of characters to copy");
	scanf("%d",&n);
	mystrncpy(destination,source,n);
	printf("copied string is %s\n,destination");


}
	
	
