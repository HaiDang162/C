#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	float radius, area;
	printf("Welcome to Math Helper Program\n");
	printf("Please choose the following functions to play with\n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the triangle area\n");
	printf("4. Quit\n");
	printf("Choose 1..4\n");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("You choose 1 to compute the disk area\n");
			printf("Please input a disk's radius: ");
			scanf("%f", &radius);
			area = 3.14 * radius * radius;
			printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
			break;
		case 2:
			printf("You choose 2 to compute the rectangle area\n");
			printf("Please input a disk's radius: ");
			break;
		case 3:
			break;
		case 4:
			printf("Bye bye, see you next time\n");
			break;
			
		default:
			printf("Please choose 1..4\n");		
	}
	return 0;
}