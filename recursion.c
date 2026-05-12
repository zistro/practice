#include "stdio.h"
void printNum(int n) {
	if (n>50) {
		return;
	}
	else {
		printf("%d ", n);
		printNum(n+1);
	}
}
int main () {
	printNum(1);
	return 0;
}
