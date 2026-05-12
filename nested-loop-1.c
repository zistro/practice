#include <stdio.h>
int main() {
	int i, j;
	for (i=0;i<5;i++) {
		for (j=5;j>0;j--) {
			if (j>=3) {
				continue;
			}
			printf("i = %d, j = %d\n", i, j);
		}
	}
	return 0;
}
