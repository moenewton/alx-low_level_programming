#include <stdio.h>
/**
*main - prints init
*Return: 0
*/
int main(void)
{
int x;
unsigned long n1 = 0, n2 = 1, n3;
for (x = 0; x < 50; x++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;
if (inc == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
