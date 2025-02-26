#include <stdio.h>

int main() {
    int i, j;
    scanf("%d", &i);
    int arr[i];
    for (j = 0; j < i; j++) {
        scanf("%d", &arr[j]);
    }

    int isinc = 0;
    int isdec = 0;

    for (j = 0; j < i - 1; j++) { // Changed loop to go till i-1
        if (arr[j] < arr[j + 1]) {
            isinc = 1;
        }
        if (arr[j] > arr[j + 1]) {
            isdec = 1;
        }
    }

    if (isinc && isdec) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
