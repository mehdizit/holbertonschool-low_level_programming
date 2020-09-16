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


printf("size of int :%1d \n", sizeof(inttype));
printf("size of float:%1d\n", sizeof(floattype));
printf("size of double:%1d\n", sizeof(longtype));
printf("size of char:%1d\n", sizeof(chartype));
return (0);

}
