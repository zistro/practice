#include <stdio.h>
int main() {
	int marks[] = {50, 60, 70, 80, 90}, lenth, i;
	lenth = sizeof(marks)/sizeof(marks[0]);
	printf("Numbers of elements: %d\n", lenth);
	marks[2] = 68;
	for(i=0; i<lenth; i++) {
		printf("Marks = %d\n", marks[i]);
	}
}
