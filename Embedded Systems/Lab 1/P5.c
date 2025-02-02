#include <stdio.h>
//works

int main() {
    int size;
    int count = 0;
    int num;

    printf("How big is the array?: \n");
    scanf("%d", &size);

    int arr[size];  // Declare array
    int counted[size];  // Array to track counted duplicates

    for (int i = 0; i < size; i++) {
        counted[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);  // Store input
    }

    for (int i = 0; i < size; i++) {
        if (counted[i]) continue;  // Skip already counted numbers

        int repeat = 0;
        for (int j = i + 1; j < size; j++) {  // Compare only with next elements
            if (arr[i] == arr[j]) {
                repeat = 1;
                counted[j] = 1;  // Mark duplicate as counted
            }
        }

        if (repeat) {
            count++;  // Count only once per unique repeated number
            counted[i] = 1;  // Mark the first occurrence as counted
        }
    }

    printf("%d\n", count);
    return 0;
}
