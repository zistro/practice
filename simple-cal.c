#include <stdio.h>

int main() {
	int p, fi = 0, si = 0, sum, sub, mult, pivot = 1;
	float div;

	do {
		printf("\n--- Calculator Menu ---\n");
		printf("1. Summation (+)\n");
		printf("2. Subtraction (-)\n");
		printf("3. Multiplication (*)\n");
		printf("4. Division (/)\n");
		printf("5. Exit\n");
		printf("---------------------\n");
		printf("Pick an option (1-5): ");
		scanf("%d", &p);

		if (p >= 1 && p <= 4) {
			printf("Enter two integers with space: ");
			// Read the two integers for calculation
			if (scanf("%d %d", &fi, &si) != 2) {
                printf("Invalid input. Please enter two integers.\n");
                // Clear input buffer to prevent infinite loop on bad input
                while (getchar() != '\n'); 
                continue; // Skip to next iteration of the loop
            }

			if (p == 1) {
				sum = fi + si;
				printf("Sum = %d\n", sum);
				// Removed break to allow multiple operations
			}
			else if (p == 2) {
				sub = fi - si;
				printf("Sub = %d\n", sub);
				// Removed break to allow multiple operations
			}
			else if (p == 3) {
				mult = fi * si;
				printf("Mult = %d\n", mult);
				// Removed break to allow multiple operations
			}
			else if (p == 4) {
				// Add division by zero check
				if (si != 0) {
					div = (float)fi / si;
					printf("Div = %.2f\n", div);
				} else {
					printf("Error: Division by zero is not allowed.\n");
				}
				// Removed break to allow multiple operations
			}
		} else if (p == 5) {
			pivot = 0; // Set pivot to 0 to exit the do-while loop
			printf("Exiting calculator. Goodbye!\n");
		} else {
			printf("Invalid choice. Please pick a number between 1 and 5.\n");
		}
	} while (pivot);

	return 0;
}
