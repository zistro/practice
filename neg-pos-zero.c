#include <stdio.h>
int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if (x>0) {
		printf("%d is postive\n", x);
	}
	else if (x<0) {
		printf("%d is negative\n", x);
	}
	else if (x==0) {
		printf("%d is neutral\n", x);
	}
	return 0;
}
