#include<stdio.h>
int main() {
int intType;
float floatType;
double doubleType;
char charType;
/*
 *main - prints the size of various types on the computer it is compiled and run on.
 *
 *Return: 0
 **/
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));

	return (0);
}
