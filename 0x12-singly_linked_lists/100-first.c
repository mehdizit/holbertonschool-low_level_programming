#include <stdio.h>
void init();
void __attribute__ ((constructor)) init()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
