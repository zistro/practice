#include <stdio.h>
int main() {
	int array[5][5];
	for (int i=0; i<2; i++) {
		for (int j=0; j<5; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	for (int i=0; i<2; i++) {
		for (int j=0; j<5; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
