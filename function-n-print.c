#include <stdio.h>
int ntimes (int a) {
	for (int i=0; i<a; i++) {
		printf("Hello World\n");
	}
	return 0;
}
int main() {
	int a;
	scanf("%d", &a);
	ntimes(a);
	return 0;
}
