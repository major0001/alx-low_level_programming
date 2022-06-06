#include <stdio.h>
/**
 * main -Prints "Type and its size"
 * Return: Always 0 (success)
*/

int main(void)
{
	char achar;
	int aint;
	long alg;
	long long allg;
	float aflt;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(aint));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(alg));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(allg));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(aflt));

	return (0);
}

