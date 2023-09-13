#include <stdio.h>
/**
*main - print multiples
*Return: 0
*/
int main(void)
{
int x;
int sum;
sum = 0;
for (x = 0; x < 1024; x++)
{
if ((x % 3) == 0 || (x % 5) == 0)
sum += x;
}
printf("%d\x", sum);
return (0);
}
