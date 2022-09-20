#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_integer;
	float input_float;
	
	printf("enter an integer: ");
	scanf("%d", &input_integer);
	
	printf("enter a flaot: ");
	scanf("%f", &input_float);
	
	printf("integer: %d, float: %f", input_integer, input_float);
	return 0;
}
