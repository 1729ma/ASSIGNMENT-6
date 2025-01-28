#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n); //input from the user

    

    int array[n],int min = array[0], max = array[0];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); //storing the elements in the array
    }

    

    for (int i = 1; i < n; i++) {
        if (array[i] < min) {   //calculating the max and min values
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    int range = max - min; //calculating the range

    
    printf("The range of the array is: %d\n", range); //printing the ouput

    return 0;
}
