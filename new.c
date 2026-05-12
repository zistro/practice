#include <stdio.h>

int main() {
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int largest       = 0;
    int secondLargest = 0;

    // Step 1: Find the largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Step 2: Find the second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    printf("The Second largest element in the array is : %d\n", secondLargest);
    return 0;
}
