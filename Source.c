#include <stdio.h>
#include <stdlib.h>
#include <string.h>    

int *getPtr( int a )
{
	int *ptr = NULL;
	if( a > 20 )
		ptr = malloc(4);
	return ptr;
		
}

/*
void callme()
{
	int a = 90;
}
*/


int fooBar()
{
	int *ptr = getPtr( 10);
	*ptr = 100;
	if( ptr != NULL )
		printf( "%d\r\n", *ptr );
	return 1;
}
