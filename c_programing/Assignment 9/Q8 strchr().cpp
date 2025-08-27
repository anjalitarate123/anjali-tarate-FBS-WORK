#include <stdio.h>
#include <string.h>
int main()
 {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'o');

    if (ptr != NULL)
        printf("First occurrence of 'o' is: %s\n", ptr);
    else
        printf("'o' not found.\n");
}