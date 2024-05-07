#include <stdio.h>
#include <stdlib.h>

// lưu 10 cột điểm của môn C và in ra
// IPO: 10 biến
int main(int argc, char *argv[]) {
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	float c[10];
	
	c1 = 10.0;
	c[0] = 10.0;
	printf("Bien le %.2f %.2f %.2f\n", c1, c2, c3);
	printf("Bien mang %.2f %.2f %.2f", c[0], c[1], c[2]);
	printf("Input 2 grades (0..10): ");
	scanf("%f", &c2);
	scanf("%f", &c[1]);
	printf("After inputing 2 grades the current grades are:\n");
	printf("Bien le %.2f %.2f %.2f\n", c1, c2, c3);
	printf("Bien mang %.2f %.2f %.2f", c[0], c[1], c[2]);
	scanf("%f%f%f%f%f%f", &c1, &c2, &c3, &c4, &c5, &c6);
	scanf("%f", &c[i]);
	return 0;
}