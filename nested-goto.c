#include <stdio.h>
int main() {
	int i, j, k;
	for (i=0; i<=10; i++) {
		for (j=0; j<=5; j++) {
			for (k=0; k<=3; k++) {
				if(j==3)
					goto out;
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
out:
	printf("END\n");


	return 0;

}
