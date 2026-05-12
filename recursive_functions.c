#include <stdio.h>

// Recursive function to print array elements (replaces array.c loop)
void printArrayRecursive(int arr[], int index, int size) {
    if (index >= size) {
        return;
    }
    printf("%d\n", arr[index]);
    printArrayRecursive(arr, index + 1, size);
}

// Recursive function to find divisors (replaces while-loop-1.c loop)
void findDivisorsRecursive(int n, int i, int *count) {
    if (i > n) {
        return;
    }
    if (n % i == 0) {
        printf("%d\n", i);
        (*count)++;
    }
    findDivisorsRecursive(n, i + 1, count);
}

// Recursive function to print numbers 1 to n (replaces do-while-1.c loop)
void printNumbersRecursive(int i, int n) {
    if (i > n) {
        return;
    }
    printf("%d\n", i);
    printNumbersRecursive(i + 1, n);
}

// Recursive function to print nested loop pattern (replaces nested-loop-1.c loop)
void printNestedPatternRecursive(int i, int j, int max_i, int max_j) {
    if (i >= max_i) {
        return;
    }
    if (j <= 0) {
        printNestedPatternRecursive(i + 1, max_j, max_i, max_j);
        return;
    }
    if (j < 3) {
        printf("i = %d, j = %d\n", i, j);
    }
    printNestedPatternRecursive(i, j - 1, max_i, max_j);
}

// Recursive function to calculate menu-driven operations (replaces calc.c loop)
void calculateMenuRecursive(int select, int input1, int input2, int run) {
    if (!run) {
        return;
    }

    int result;

    if (select >= 1 && select <= 4) {
        printf("Enter first integer: ");
        scanf("%d", &input1);
        printf("Enter second integer: ");
        scanf("%d", &input2);

        switch (select) {
            case 1:
                result = input1 + input2;
                printf("Result = %d\n", result);
                break;
            case 2:
                result = input1 - input2;
                printf("Result = %d\n", result);
                break;
            case 3:
                result = input1 * input2;
                printf("Result = %d\n", result);
                break;
            case 4:
                if (input2 == 0) {
                    printf("Used zero exiting!!!");
                    calculateMenuRecursive(0, 0, 0, 0);
                    return;
                }
                float result_float = (float)input1 / input2;
                printf("Result = %.2f\n", result_float);
                break;
        }
    }
    else if (select == 5) {
        printf("Exiting ;)");
        calculateMenuRecursive(0, 0, 0, 0);
        return;
    }
    else {
        printf("Wrong Selection!!!");
        calculateMenuRecursive(0, 0, 0, 0);
        return;
    }

    // Show menu again
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Select one of these: ");
    scanf("%d", &select);

    calculateMenuRecursive(select, input1, input2, 1);
}

// Main functions to demonstrate the recursive implementations
int main() {
    // Example 1: Print array elements recursively
    int marks[] = {60, 70, 80, 90};
    printf("Printing array elements recursively:\n");
    printArrayRecursive(marks, 0, 4);
    printf("\n\n");

    // Example 2: Find divisors recursively
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Divisors:\n");
    findDivisorsRecursive(n, 1, &count);
    printf("No of divisors = %d\n", count);
    if (count == 2) {
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }
    printf("\n\n");

    // Example 3: Print numbers 1 to 10 recursively
    printf("Printing numbers 1 to 10 recursively:\n");
    printNumbersRecursive(1, 10);
    printf("\n\n");

    // Example 4: Print nested pattern recursively
    printf("Printing nested pattern recursively:\n");
    printNestedPatternRecursive(0, 5, 5, 5);
    printf("\n\n");

    // Example 5: Menu-driven calculator recursively
    // Note: This is a simplified version that doesn't handle user input
    // in the recursive calls for demonstration purposes
    printf("Menu-driven calculator (recursive version)\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Select one of these: ");
    int select;
    scanf("%d", &select);
    calculateMenuRecursive(select, 0, 0, 1);

    return 0;
}