#include <stdio.h>
#include <stdlib.h>
int yob; // yob là biến toàn cục, global, hàm nào cũng xài/ sửa đc

// yob = 2002; // sai !!
// bài lẻ, hiểu kiến thức lí thuyết. Bài này minh hoc cái khái niệm scope
// của 1 biến, tức là ta đứng ở đâu thì ta mới sờ đc biến, chỗ nào thì bị biến
// che khuất/ kh thấy - local và global
// liên quan đến scope
void printYob();
void printLatesYob();
int main(int argc, char *argv[]) {
	printf("in main(), yob is %d\n", yob);
//	yob = 2002;
	printYob();
	printLatesYob();
	printf("int main(), after calling printfYob() yob finally is %d\n", yob);
	return 0;
}

void printYob() {
	printf("in printYob(), yob is %d\n", yob);
	yob = 2010;
	printf("in printYob(), after updating yob, yob now is %d\n", yob);
}

void printLatesYob() {
	yob = 2022;
	printf("in printLatesYob(), after updating yob, yob now is %d\n", yob);
}