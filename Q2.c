#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int array[n], arr2[n], duplicate = 0, uni = 0;

    // Input the elements of the array from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Count duplicates
    for (int i = 0; i < n; i++) {
        int c = 0;

        
        for (int j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                c = 1;
                duplicate ++;
                break;
            }
        }

        // adding the other elements to a new array
        if (!c) {
            arr2[uni++] = array[i];
        }
    }

    // Print the outputs
    printf("Total number of duplicate elements: %d\n", duplicate);

   
    for (int i = uni- 1; i >= 0; i--) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
