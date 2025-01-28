#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Input the elements of the array from user

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Print the reversed array
    
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
