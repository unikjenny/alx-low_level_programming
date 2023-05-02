#include<stdio.h>
/**
 * main - Programming for printing various computer styles
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int a;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
