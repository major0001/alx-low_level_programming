#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');

}
