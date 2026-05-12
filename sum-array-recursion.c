#include <stdio.h>
int sumarr(int arr[], int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		return arr[n-1] + sumarr(arr, n-1);
	}
}
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sumarr(arr, n));
	return 0;
}
