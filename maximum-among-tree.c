#include <stdio.h>
int main() {
	int x, y, z;
	printf("Enter 3 nums: ");
	scanf("%d %d %d", &x, &y, &z);
	if(x>y) {
		if(x>z) {
			printf("%d is greater", x);
		}
	}
	if(y>x) {
		if(y>z) {
			printf("%d is greater", y);
		}
	}
	if(z>x) {
		if(z>y) {
			printf("%d is greater", z);
		}
	}
	return 0;
}
