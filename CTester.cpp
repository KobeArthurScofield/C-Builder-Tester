// ProgrammeTest.cpp : Intro
//

#include "stdio.h"

int bitLengthChk();	//Pre-defining the bitlength function

int main()
{
	short int isExit = 1;	//Checking loop controller
	printf("This code is a tester for recognizing compilers and buiders\n\n");
	printf("Containing the following tests:\nIntergrate Length\n");
	while (isExit != 0)
	{
		printf("\n");
		bitLengthChk();
		printf("\nEnter 0 to exit, 1 to re-check: ");	//Control the loop
		scanf("%hd", &isExit);
	}
	return 0;
}


int bitLengthChk()	//To check the bit Length
{
	unsigned short int testshort;
	unsigned int testint;
	unsigned long int testlong;
	unsigned long long int testdblong;
	printf("Short: %zd bytes\nInt: %zd bytes\nLong: %zd bytes\nLong long: %zd bytes\n", sizeof(testshort), sizeof(testint), sizeof(testlong), sizeof(testdblong));
	return 0;
}
