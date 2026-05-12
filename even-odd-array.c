#include <stdio.h>
int main() {
	int i, lk[6];
	printf("Enter 5 elements: ");
	for(i=1; i<6; i++) {
		scanf("%d", &lk[i]);
	}
	for(i=1; i<6; i++) {
		if(lk[i]%2==0) {
			printf("Even = %d\n", lk[i]);
		}
		if(lk[i]%2!=0) {
			printf("Odd = %d\n", lk[i]);
		}
	}
	return 0;
}
