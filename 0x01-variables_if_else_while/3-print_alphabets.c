#include <stdio.h>

/**
 * main -  Prints all the alphabets in lowercase then in upercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower, upper;
lower='a';

while (lower < = 'z')
{
putchar(lower);
lower++;
}
upper=lower='A';
while (upper < = 'Z')
{
putchar(upper)
upper++;
}
putchar('\n');
return (0);
}
