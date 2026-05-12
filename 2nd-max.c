#include <stdio.h>
int main() {
	int max1, max2, i, lk[6];
	printf("Enter 5 elements: ");
	for(i=0; i<5; i++) {
		scanf("%d", &lk[i]);
	}
	if (lk[0] > lk[1]) {
		max1 = lk[0];
		max2 = lk[1];
	}
	else {
		max1 = lk[1];
		max2 = lk[0];
	}
	for (i=2; i<5; i++) {
		if (lk[i] > max1) {
			max2 = max1;
			max1 = lk[i];
		}
		else if (lk[i] > max2) {
			max2 = lk[i];	
		}
	}
	printf("2nd max = %d\n", max2);
	return 0;
}
