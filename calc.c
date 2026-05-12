/* 
	 How this works:
 	* I set the variable run=1 and did a do while loop
 	* This do while loop doesn't use any increment or increment
 	* Loops keep running till you enter 5 or something which is
 	* not 1-5  	
	* To stop the loop I just used run=0 as it need run=1 to keep the
 	* loop running
 	* Then there is a if which gets the integers and switch case which does the operations
	* Author: Galib Chowdhury
	* Date: 03/03/26
 */
#include <stdio.h>
int main() {
	int select, input1, input2, result, run=1;
	do {
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n");
		printf("Select one of these: ");
		scanf("%d", &select);
		if (select>= 1 && select<=4) {
			printf("Enter first integer: ");
			scanf("%d", &input1);
			printf("Enter second integer: ");
			scanf("%d", &input2);
			switch (select) {
				case 1:
					result=input1+input2;
					printf("Result = %d\n", result);
					break;
				case 2:
					result=input1-input2;
					printf("Result = %d\n", result);
					break;
				case 3:
					result=input1*input2;
					printf("Result = %d\n", result);
					break;
				case 4:
					if (input2==0) {
						printf("Used zero exiting!!!\n");
						run = 0;	
					}

					float result=(float)input1/input2;
					printf("Result = %.2f\n", result);
					break;
			}

		}
		else if (select == 5) {
			printf("Exiting ;)\n");
			run = 0;
		}
		else {
			printf("Wrong Selection!!!\n");
			run = 0;
		}
	} while(run==1);
	return 0;
}
