#include <stdio.h>
int main() {
	int i, lk[6];
	printf("Enter 5 elements: ");
	for(i=1; i<6; i++) {
		scanf("%d", &lk[i]);
	}
	for(i=1; i<6; i++) {
		printf("Your #%d elements: %d\n", i, lk[i]);
	}
	return 0;
}
