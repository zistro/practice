#include <stdio.h>
int main() {
	int a, b, c;
	printf("Enter three intergers with space: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c) {
		printf("%d is the bigger number\n", a);
	}
	else if (b>c && b>a) {
		printf("%d is the bigger number\n", b);
	}
	else {
		printf("%d is the bigger number\n", c);
	}
	return 0;
}
