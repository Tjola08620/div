#include <stdarg.h>
#include <stdlib.h>


int ZeroCheck( int val )
{
	// return either val or zero, could just be val but where is the fun in that?
	return val != 0 ? val : 0 ;
}

int getInput(char *input )
{
	return atoi(input) ;
}

int getMoreInput(char *input )
{
	int t = 10;
	//*t = 10;
	return t;
//	return atoi(input) ;
}
