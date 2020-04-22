#include <stdio.h>

int main()
{
	char charType;
	int integerType;
	float floatType;
	double doubleType;
	//각 데이터 타입 별 변수 선언

	printf("[----[황규현][2019038071]----]\n\n");

	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("Size of int: %ld byte\n", sizeof(integerType));
	printf("Size of float: %ld byte\n", sizeof(floatType));
	printf("Size of double: %ld byte\n", sizeof(doubleType));
	//데이터 타입 별 변수의 크기 - 타입에 따라 크기가 다름
	printf("\n------------------------------------------\n");

	printf("Size of char: %ld byte\n", sizeof(char));
	printf("Size of int: %ld byte\n", sizeof(int));
	printf("Size of float: %ld byte\n", sizeof(float));
	printf("Size of double: %ld byte\n", sizeof(double));
	//데이터 타입 별 크기 - 타입에 따라 크기가 다름
	printf("\n------------------------------------------\n");

	printf("Size of char: %ld byte\n", sizeof(char*));
	printf("Size of int: %ld byte\n", sizeof(int*));
	printf("Size of float: %ld byte\n", sizeof(float*));
	printf("Size of double: %ld byte\n", sizeof(double*));
	//데이터 타입 별 포인터의 크기 - 모두 동일함을 알 수 있음
	return 0;
}
