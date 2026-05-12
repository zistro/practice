#include <stdio.h>
int main() {
	int x;
	printf("Enter the number of the month: ");
	scanf("%d", &x);
	switch (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12) {
		case 1:
			printf("31\n");
			break;
		case 0:
			printf("30\n");
			break;
	}
	return 0;
}
