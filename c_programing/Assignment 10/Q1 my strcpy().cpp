#include<stdio.h>
#include<string.h>
void mystrcpy();
	void mystrcpy(char*destination , const char* source)
	{
	
		while(*source !='\0')
		{
			destination++;
			source++;
		}
		*destination ='\0';
	}
	
	int main()
	{
		char source[100], destination[100];
		printf("enter a string");
		gets(source);
		mystrcpy (destination, source);
		printf("copy string as %s\n");
		return 0;
		
	}


	
