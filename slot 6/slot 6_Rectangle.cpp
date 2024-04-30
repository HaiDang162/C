#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int width, length, area;
	printf("You are required to input the size of a rectangle\n");
	printf("Input width, length, area: ");
	scanf("%d%d", &width, &length);
	area = width * length;
	
	printf("The area of rectangle (%d, %d) is %d\n", width, length, area);
	return 0;
}