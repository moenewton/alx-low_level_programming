#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code 3
 * Return: 0
 */
int main(void)
{
        char c;
        
        char e;

        c = 'a';
        e = 'A';
        
        while
                (c <= 'z') {
                    putchar(c);
                    c++;
                }
        while 
		        (e <= 'Z') {
		        	putchar(e);
		        	e++;
				}
        putchar('\n');
        return (0);
}
