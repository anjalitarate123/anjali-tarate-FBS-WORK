#include <stdio.h>
#include <string.h>
int main()
 {
    char str1[] = "computer";
    char str2[] = "commet";

    int result = strncmp(str1, str2, 3); 

    if (result == 0)
        printf("First 3 characters are equal.\n");
    else if (result < 0)
        printf("str1 is less than str2 in the first 3 characters.\n");
    else
        printf("str1 is greater than str2 in the first 3 characters.\n");
}