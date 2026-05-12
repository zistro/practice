#include <stdio.h>
int main() {
	char sod[90];
	int alpha = 0, digit = 0, capital = 0;
	printf("Input string: ");
	fgets(sod, sizeof(sod), stdin);
	for (int i = 0; sod[i] != '\0'; i++) {
		if ((sod[i] >= 'A' && sod[i] <= 'Z') || (sod[i] >= 'a' && sod[i] <= 'z')) {
			alpha++;
		}
		if (sod[i] >= '0' && sod[i] <= '9') {
			digit++;
		}
		if (sod[i] >= 'A' && sod[i] <= 'Z') {
			capital++;
		}
	}
	printf("Alphabet = %d\nDigit = %d\nCapital = %d", alpha, digit,capital);
	return 0;
}
