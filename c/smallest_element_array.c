/*
 * Program to find the smallest element in an array.
 *
 * This program prompts the user to enter the size of the array
 * and its elements. It then calculates the smallest element
 * using a single pass through the array, without sorting it.
 *
 */


#include <stdio.h>

int find_smallest(int arr[], int n) {
    // Initialize the smallest element to the first element
    int smallest = arr[0];

    // Iterate through the array
    for (int i = 1; i < n; i++) {
        // Update smallest if the current element is smaller
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest; // Return the smallest element found
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

    // Find the smallest element
    int smallest = find_smallest(arr, size);

    // Output the result
    printf("The smallest element is %d\n", smallest);

    return 0;
}
