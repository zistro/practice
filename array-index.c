#include <stdio.h>
int main() {
	int i, array[5];
	printf("Enter 5 elements for the array: ");
	for (i=0; i<5; i++) {
		scanf("%d", &array[i]);
	}
	for (i=0; i<5; i++) {
		printf("Index [%d] = %d\n", i, array[i]);
	}
	return 0;
}
