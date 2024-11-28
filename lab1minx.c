#include<stdio.h>
int main() {
	int num1;
	int num2;
	printf("Type a number: \n");
	scanf("%d", &num1);
	printf("Type a number: \n");
	scanf("%d", &num2);
	if (num1>num2) {
		printf("num1 %d greater than num2", num1-num2);
	} else {
		printf("num2 %d greater than num1", num2-num1);
	}
}
