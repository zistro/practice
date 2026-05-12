#include <stdio.h>
#include <stdbool.h>
int main() {
	bool a=true;
	int x=(a%2==0);
	if (x) {
		printf("True");
	}
	else {
		printf("False");
	}
	return 0;
}

