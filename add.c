#include <stdio.h>
int add(int *x, int *y);
int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int Sum = add(&x, &y);
	printf("Addition = %d", Sum);
}
int add(int *x, int *y) {
	return *x+*y;
}
