#include <stdio.h>
#include <stdbool.h>
int main() {
	int m=7;
	int x=(m%2==0);
	if(x) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	return 0;
}

