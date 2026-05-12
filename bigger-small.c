#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int biggest = arr[0];
    int smallest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("\nBiggest number: %d\n", biggest);
    printf("Smallest number: %d\n", smallest);
    
    return 0;
}
