#include <stdio.h>
/**
 * main - Third program
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: 1 byte(s)\n", (unsignedlong)sizeof(a));
printf("Size of an int: 4 byte(s)\n", (unsignedlong)sizeof(b));
printf("Size of a long int: 4 byte(s)\n", (unsignedlong)sizeof(c));
printf("Size of a long long int: 8 byte(s)\n", (unsignedlong)sizeof(d));
printf("Size of a float: 4 byte(s)\n", (unsignedlong)sizeof(e));
return (0);
}
