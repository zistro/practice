#include <stdio.h>
int main() { 
	float marks[50];
	int i, n;
	printf("How many numbers you want: ");
	scanf("%d", &n);
	printf("Enter %d values: ", n);
	for(i=0; i<n; i++) {
		scanf("%f", &marks[i]);
	}
	for(i=0; i<n; i++) {
		printf("marks[%d] = %.2f\n", i, marks[i]);
	}
	int max=marks[0];
	for(i=1; i<n; i++) {
		if(marks[i]>max) {
			max=marks[i];
		}
	}
	int min=marks[0];
	for(i=1; i<n; i++) {
		if(marks[i]<min) {
			min=marks[i];
		}
	}
	int sum=0;
	for(i=0; i<n; i++) {
		sum = sum+marks[i];
	}
	float avg;
	avg=(float)sum/n;
printf("Maximum value is %d\n", max);
	printf("Minimum value is %d\n", min);
	printf("Sum of dose numbas is %d\n", sum);
	printf("Avg is %.2f\n", avg);
	int item, flag=0;
	printf("Which number are you searching for: ");
	scanf("%d", &item);
	for(i=0; i<n; i++) {
		if(marks[i]==item){
			flag = 1;
			break;
		}
	}
	if(flag==0){
		printf("Not found\n");
	}
	else {
		printf("Found\n");
	}
	return 0;
}
