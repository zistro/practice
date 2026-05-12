#include <stdio.h>
int main() {
	int x=10;
	int *ptr;
	ptr = &x;
	printf("Value of x: %d\n", x);
	printf("Address of x: %p\n", &x);
	printf("Value of ptr (address of x): %p\n", ptr);
	printf("Address of ptr: %p\n", &ptr);
	printf("Value pointed to by ptr (*ptr): %d\n", *ptr);
	return 0;
}
