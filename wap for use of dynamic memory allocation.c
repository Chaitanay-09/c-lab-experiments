#include <stdio.h>
#include <stdlib.h>  

int main() {
    int *marks;   
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);


    marks = (int *)malloc(n * sizeof(int));
    

    if (marks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  
    }

    // input marks
    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // display marks
    printf("\nMarks you entered:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    free(marks);

    return 0;
}
