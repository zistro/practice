#include <stdbool.h>
#include <stdio.h>
int main() {
	int selection;
	do {
	static int x=1;
	x++;
	printf("1.Print x\n2.Exit\nSelect: ");
	scanf("%d", &selection);
	if (selection==1) {
		printf("x = %d\n", x);
	}
	if (selection==2) {
		break;	
	}
	}while (1);
	return 0;
}
