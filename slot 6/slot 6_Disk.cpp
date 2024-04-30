#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1415;
// ki hieu cho vung ram read-only


int main(int argc, char *argv[]) {
	
	float radius, area;
	
	printf("Input a radius of a disk: ");
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("The area of a disk (r = %.2f) is %.2f\n", radius, area);
	return 0;
}