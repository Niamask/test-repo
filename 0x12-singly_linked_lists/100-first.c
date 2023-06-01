#include <stdio.h>

void beformain(void) __attribute__ ((constructor));

/**
 * beformain - a function thet print a string.
 *
 * return: nothing
 */


void beformain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
