#include <stdio.h>
#include <stdlib.h>

// nhap vap nam sinh sau do tra loi du tuoi vao quan bar hay ko
// >= 18 duoc vao bar
// de giai quyet bai nay: ta can gi ????
//INPUT: tuoi, thi can nam sinh
//> bien, luu value cho input!!!

//PROCESS: xy li gi ???
// 		   co nam sinh ta ra tuoi
// 		   quyet nam sinh ta ra tuoi
//         quyet dinh vao bar hay khong va thong bao!!!

//OUTPUT: can xuat ket qua gi ( cho vao bar hoac khong ?


int main(int argc, char *argv[]) {
	int yob, age;
	printf("Welcome to Thien Duong Bar\n");
	printf("Please shw your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2020 - yob;
	if (age >= 18)
		printf("Khong say khong ve. Say thi sao ve. Let's chill\n");
	else if (age >= 20)
		printf("Hey rich kid. Go home now!!!\n");
	else 
		printf("None");
	
		
	return 0;
}