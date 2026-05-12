#include <stdio.h>
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int i, sum=0;
	int *ptr;
	ptr = &arr[0];
	for (i=0; i<5; i++) {
		sum = sum+*(ptr+i);
	}
	printf("%d", sum);
	return 0;
}
