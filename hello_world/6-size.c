#include<stdio.h>
int main(void) {
int intType;
float floatType;
long int longIntType;
long long int longLongInt;
char charType;
/*
 *main - prints the size of various types on the computer it is compiled and run on.
 *
 *Return: 0
 **/
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of long long int: %zu bytes\n", sizeof(longLongInt));
	printf("Size of char: %zu byte\n", sizeof(charType));

	return (0);
}
