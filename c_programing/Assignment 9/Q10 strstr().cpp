#include <stdio.h>
#include <string.h>
int main() 
{
    char str[] = "programming in C";
    char *ptr = strstr(str, "gram");

    if (ptr != NULL)
        printf("Substring found: %s\n", ptr);
    else
        printf("Substring not found.\n");
}