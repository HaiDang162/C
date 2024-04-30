#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int count = 1;
	for (;;) //ko khoi dau, ko ket thuc, ko dem gi ca
	{
		
		printf("%d ", count);
		count++;
		if (count == 101)
			break; // dk thoat lap trong for
	}
	return 0;
}