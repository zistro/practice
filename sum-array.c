#include <stdio.h>
int main() {
	int sum=0, i, lk[6];
	printf("Enter 5 elements: ");
	for(i=1; i<6; i++) {
		scanf("%d", &lk[i]);
	}
	for(i=1; i<6; i++) {
		sum = sum+lk[i];
	}
	printf("Sum = %d\n", sum);
	return 0;
}
