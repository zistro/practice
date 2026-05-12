#include <stdio.h>
int x=1;
void even();
void odd();
int main() {
	odd();
	return 0;
}
void odd() {
	if (x<=10) {
		printf("%d", x+1);
		x++;
		even();
	}
}
void even() {
	if (x<=10) {
	printf("%d", x-1);
	x++;
	odd();
	}
}
