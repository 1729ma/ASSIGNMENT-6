
#include <stdio.h>

int main() {
    int arr[10], i, j, temp; //varaiable declaration

    // Accepting 10 integers from the user
    
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in ascending order
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(arr[i] > arr[j]) {
              
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Integers in ascending order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
