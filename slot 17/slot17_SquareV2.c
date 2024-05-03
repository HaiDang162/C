#include <stdio.h>
#include <stdlib.h>

// fV3(x) = dang; void chi xuat printf()
void fV1();
int fV3(int dang);
int main(int argc, char *argv[]) {
	fV1();
	return 0;
}

void fV1()
{
	int x;
	printf("Please input an integer to get ^2\n");
	scanf("%d", &x);
	printf("y = f(x) = x^2; f(%d) = %d\n", x, fV3(x));
}
int fV3(int dang)
{
	dang = dang * dang;
	return dang;
}