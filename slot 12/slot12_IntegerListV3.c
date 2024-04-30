#include <stdio.h>
#include <stdlib.h>

// in ra cac so le tu 1..1000

int main(int argc, char *argv[]) {
	for (int i = 1; i <= 1000; i++)
		if (i % 2 != 0)
			printf("%d ", i);
	return 0;
}