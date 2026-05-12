#include <stdio.h>
#include <stdbool.h>
int main() {
	int x=1, y=0;
	if(x || y) {
		printf("True");
	}
	else {
		printf("False");
	}
	return 0;
}
