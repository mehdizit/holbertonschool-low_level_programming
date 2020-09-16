#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int inttype;
float floattype;
long longtype;
char chartype;


printf("size of int :%i \n", sizeof(inttype));
printf("size of float:%i\n", sizeof(floattype));
printf("size of double:%i\n", sizeof(longtype));
printf("size of char:%i\n", sizeof(chartype));
return (0);

}
