//Definition  of an array:-  An array is a collection of multiple values of the same data type stored in continuous memory locations, accessed using an index starting from 0
// data_type array_name[size];

/* Example */
// int marks[5] = {90, 85, 78, 92, 88};
/*              [0]  [1]  [2]  [3]  [4]  ← index */

// Key Rules:
// 1. All elements must be of SAME data type
// 2. Index always starts from 0
// 3. Size must be fixed at declaration (in basic C)
// 4. arr[i] is same as *(arr + i) using pointers 


#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int marks[5] = {90, 85, 78, 92, 88};

    // Print elements using index
    printf("Marks using index:\n");
    for(int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    // Print elements using pointer notation
    printf("\nMarks using pointer notation:\n");
    for(int i = 0; i < 5; i++) {
        printf("*(marks + %d) = %d\n", i, *(marks + i));
    }

    return 0;
}
