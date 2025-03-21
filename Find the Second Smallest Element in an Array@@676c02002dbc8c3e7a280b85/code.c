#include<stdio.h>
#include<limits.h> // For INT_MAX

int main() {
    int n, i;
    int smallest = INT_MAX, second_smallest = INT_MAX;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];       
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];  
        }
    }
    if (second_smallest == INT_MAX) {
        printf("-1\n"); 
    } else {
        printf("%d", second_smallest);
    }

    return 0;
}
