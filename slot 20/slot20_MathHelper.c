#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float PI = 3.14;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printMenu();
void computeDiskArea();
int main(int argc, char *argv[]) {
	int choice;
	do {
		printMenu();
		printf("Choose 1..5: ");
		scanf("%d", &choice);
		printf("--------------------------------------------\n");
		switch (choice) {
			case 1:
				computeDiskArea();
				break;
			case 2:
				printf("You choose to compute the retangle area\n");
				break;
			case 3:
				printf("3. You choose to compute the triangle area\n");
				break;
			case 4:
				printf("4. You choose to compute the ... area\n");
				break;
			case 5:
				printf("Good byeeeeeeeeeeeeeeeeeeeeeeeeeee\n");
				break;		
		}	
	} while (choice != 5);
	return 0;
}

void printMenu() {

	printf("Welcome to Math Helper program\n");
	printf("Choose the following functions to play with: \n");
	printf("1. Compute the disk area                     \n");
	printf("2. Compute the rectangle area                \n");
	printf("3. Compute the triangle area                 \n");
	printf("4. Compute the ... area                      \n");
	printf("5. Quit                                      \n"); 
}
void computeDiskArea() {
	float radius;
	printf("You choose to compute the disk area\n");
	printf("Please input a radius (> 0): \n");
	scanf("%f", &radius);
	printf("The disk with r = %.2f has the area of %.2f\n", radius, PI * pow(radius, 2));
	printf("--------------------------------------------\n");
}