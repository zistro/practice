#include <stdio.h>
int main() {
	int x, y, z;
	printf("Enter three intergers with space: ");
	scanf("%d %d %d", &x, &y, &z);
	switch (x>y && x>z) {
		case 1:	
			printf("%d is bigger\n", x);
			break;
		case 0:
			switch (y>z && y>x) {
				case 1:
					printf("%d is bigger\n", y);
					break;
				case 0:
					printf("%d is bigger\n", z);
					break;
			}
	}
	return 0;
}
