#include <stdio.h>
/**
 * init - Prints a string before the main function is executed.
 *
 */
void init(void);
void __attribute__ ((constructor)) init()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
