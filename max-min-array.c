#include <stdio.h>
int main() {
	int max, min, i, lk[6];
	printf("Enter 5 elements: ");
	for(i=0; i<5; i++) {
		scanf("%d", &lk[i]);
	}
	max = lk[0];
	min = lk[0];
	for(i=1; i<5; i++) {
		if (lk[i] > max) {
			max = lk[i];
		}
		if (lk[i] < min) {
			min = lk[i];
		}
	}
	printf("Max = %d and Min = %d\n", max, min);
	return 0;
}
