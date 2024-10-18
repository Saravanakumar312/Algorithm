
/*
 * Program to find the second smallest element in an array.
 *
 * This program prompts the user to enter the size of the array
 * and its elements. It then calculates the second smallest element
 * using a single pass through the array, without sorting it.
 * 
 * If the second smallest element does not exist (e.g., all elements 
 * are the same), the program will inform the user.
 *

 */
#include <stdio.h>

int second_smallest(int arr[], int n) {
    // Initialize first_min and second_min to maximum possible integer value
    int first_min = __INT_MAX__;  
    int second_min = __INT_MAX__;

    for (int i = 1; i < n; i++) {
        if (arr[i] < first_min) {
            second_min = first_min;  // Update second_min to the previous first_min
            first_min = arr[i];      // Update first_min to the current element
        } else if (arr[i] < second_min && arr[i] != first_min) {
            second_min = arr[i];      // Update second_min
        }
    }

    // Check if second_min was updated; if not, return -1
    return (second_min == __INT_MAX__) ? -1 : second_min;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Check for valid size
    if (size <= 0) {
        printf("Invalid size!\n");
        return 1; // Exit with an error code
    }

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the second smallest element
    int second_min = second_smallest(arr, size);

    // Output the result
    if (second_min != -1) {
        printf("The second smallest element is %d\n", second_min);
    } else {
        printf("There is no second smallest element.\n");
    }

    return 0;
}
