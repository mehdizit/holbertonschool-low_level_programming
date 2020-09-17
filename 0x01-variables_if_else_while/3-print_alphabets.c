#include <stdio.h>

/**
 * main -  Prints all the alphabets in lowercase then in upercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
lower='a';

while (lower < = 'z')
{
putchar(lower);
lower++;
}
lower='A';
while (lower < = 'Z')
{
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
