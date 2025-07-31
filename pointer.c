#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Allocate memory
    ptr = malloc(sizeof(int) * n);

    // Check if allocation was successful
    if (ptr != NULL) {
        // Input values
        for (int i = 0; i < n; i++) {
            printf("Enter the element for index %d: ", i);
            scanf("%d", ptr + i);  // Correct
        }

        // Output values
        for (int i = 0; i < n; i++) {
            printf("Your value at index %d is: %d\n", i, *(ptr + i));  // Correct
        }

        // Always free malloc-ed memory
        free(ptr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
