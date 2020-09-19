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
long long longlongtype;


printf("size of an int :%i \n", sizeof(inttype));
printf("size of a float:%i\n", sizeof(floattype));
printf("size of a long:%i\n", sizeof(longtype));
printf("size of a char:%i\n", sizeof(chartype));
printf("size of a long int:%i\n", sizeof(longlongtype));
return (0);
}
