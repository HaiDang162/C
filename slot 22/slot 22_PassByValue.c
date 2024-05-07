#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f(int x);
int main(int argc, char *argv[]) {
	f(5);
	return 0;
}

void f(int x) {
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
//	return y;
}