#include <stdio.h>
#include <string.h>
int main()
 {
    char str[] = "Hello, World!";
    char *ptr = strrchr(str, 'o');

    if (ptr != NULL)
        printf("Last occurrence of 'o' is: %s\n", ptr);
    else
        printf("'o' not found.\n");
}