#include <stdio.h>

int searchNumber(int arr[], int n, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i;  
        }
    }
}

int main() {
    int arr[100], n, number, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &number);

    result = searchNumber(arr, n, number);

    if(result != -1)
        printf("Number %d found at position %d (index %d)\n", number, result + 1, result);
    else
        printf("Number %d not found in the array.\n", number);

}