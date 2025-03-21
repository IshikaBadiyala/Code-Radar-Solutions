#include<stdio.h>
#include<limits.h> // For INT_MAX

int main() {
    int n, i;
    int smallest = INT_MAX, second_smallest = INT_MAX;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Handle edge case: If array has less than two elements
    if (n < 2) {
        printf("-1\n"); // Not enough elements for a second smallest
        return 0;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the smallest and second smallest elements
    for (i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest; // Update second smallest
            smallest = arr[i];          // Update smallest
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];   // Update second smallest
        }
    }

    // Check if second smallest exists
    if (second_smallest == INT_MAX) {
        printf("-1\n"); // No second smallest (all elements are the same)
    } else {
        printf("The second smallest element is: %d\n", second_smallest);
    }

    return 0;
}
