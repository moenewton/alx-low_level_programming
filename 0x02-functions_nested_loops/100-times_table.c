#include "main.h"
/**
*times_table - prints the  times table
*@n: parameter
*Return: 0
*/
void times_table(int n)
{
int x;
int m; 
int r;
if (n <= 15 && n >= 0)
{
for (x = 0; x <= n; x++)
{
_putchar('0');

for (m = 1; m <= n; m++)
{
_putchar(',');
_putchar(' ');
r = x * m;
if (r <= 99)
_putchar(' ');
if (r <= 9)
_putchar(' ');
if (r >= 100)
{
_putchar((r / 100) + '0');
_putchar((r / 10) % 10 + '0');
}
else if (r <= 99 && r >= 10)
{
_putchar((r / 10) + '0');
}
_putchar((r % 10) + '0');
}
_putchar('\n');
}
}
}
