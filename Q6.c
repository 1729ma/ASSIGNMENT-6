#include <stdio.h>

int main() {
    int marks[5][5], total[5] = {0}, i, j;
    int hm = 0, hmi = 0; //declaring the varaibles

    // Accepting marks from the user 
    for(i = 0; i < 5; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for(j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];  // Calculate total marks for each student
        }
    }

    // Printing the total marks obtained by all students
   
    for(i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, total[i]);

        // Determine the highest total marks
        if(total[i] > hm) {
            hm = total[i];
            hmi = i;
        }
    }

    // Printing the highest total marks
    printf("\nHighest total marks obtained: %d by Student %d\n", hm, hmi + 1);

    return 0;
}
