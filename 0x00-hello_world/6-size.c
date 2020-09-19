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


printf("size of an int :%ld \n", sizeof(inttype));
printf("size of a float:%ld\n", sizeof(floattype));
printf("size of a long:%ld\n", sizeof(longtype));
printf("size of a char:%ld\n", sizeof(chartype));
printf("size of a long int:%ld\n", sizeof(longlongtype));
return (0);
}
