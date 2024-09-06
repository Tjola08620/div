//#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct st_data {
	int x;
	int y;
}st_data;


/*
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1
#include <winsock2.h>
#include <Ws2tcpip.h>
*/
#include <string.h>    


#pragma comment(lib, "Ws2_32.lib")
#define MAX_UNAME_LEN 25

void underflow( int *array, int size)
{
	for( unsigned int i = 0; i<size; i+=2)
	{
		if( i == 0 )
		{
			//coverity[overflow_const:SUPPRESS]
			i--;
		}
		else
		{
			printf( "i: %d" , i );
		}
	}
}

int divByZero(int num, int val) {



	int result =0;
	int denom = val;

	//printf("num: %d, val: %d", num, result);

	//if( denom != 0 )
		result = num / denom; // not valid,needs a check here.


	if ( denom != 0 )
	{ 
		//result = num ;
		printf( "Good result: %d\r\n", result );
	}
	printf("result: %d\r\n", result);
	return result;
}


int GetValue( int num, int val )
{
	//if (val == 0)
		val = 1;

	return num / val;
}


#define sleep( x ) for( int sleepx = 0; sleepx < x; sleepx++ ) { printf( "x" ); }
void do_long_work()
{
	for( int i = 0; i < 10000; i++ )
	{
		sleep( 10 );
	}
}
int y = 2;
int z = 1;

void func3(struct st_data* ptr)
{

	if (y == 0)

		ptr->x = 1;

	else

		ptr->x = 2;

}

void func2(struct st_data* ptr)
{
	if (z == 0)

		ptr->x = 5;

	else

		func3(ptr);

}

void uii(int* t)
{
	if (t != NULL)
		*t = 55;
}

int srcMemoryAddress[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
void fill_buff(int* buff)
{
	memcpy(buff, srcMemoryAddress, 10);
}

int main(int argc, char* argv[])
{
	int x = 1;
	int array[10];
	int* ptr = malloc(1000);
	if (ptr == 0)
		return 0;
	int result;
	int ui;

	#define THISTHINGSIZE 20
	int thisthing[THISTHINGSIZE] = {0,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
	underflow( thisthing, THISTHINGSIZE );

	uii(&ui);
	result = divByZero(100, 5);
	printf("result: %d\r\n", result);
	int foo = GetValue(30, 0);

	result = divByZero(100, ui);
	printf("result: %d\r\n", result);

	// result = divByZero( 100, 0 );
	printf("result: %d\r\n", result);

	struct st_data user_data;

	func2(&user_data);

	if (user_data.x == 0) { //Here detects UNINT

		//anycode

	}
	int* pptr = ptr;
	for (int i = 0; i < 1000; i++)
	{
		int x = 1;
		if( i > 0 )
			x = 5 / i;
		*pptr = x;
	}
	
	int buf[10];

	fill_buff(buf);

	if (buf[2] == 0) //UNINT detected
	{ //do anything}

	}
	divByZero(100, 5);
//coverity[cond_at_most]
	while( x < 300)
	{
		array[x] = x;
		printf( "hello: %d", array[x] );
		array[x] = x;
		x++;
	}
	printf( "%d", *ptr );
	//free(ptr);

	
	ptr[500] = 10;
	printf("%d", *ptr);	
	GetValue( 30, 0 );

#ifdef _DEBUG
//	notDefined - 0;
#endif

	printf( "%d", *ptr );

	free(ptr);

int starttime = time(NULL); //#defect#Y2K38_SAFETY
do_long_work();
//int middletime = time(NULL);
do_long_work();
//int middle2time = time(NULL);
do_long_work();
int endtime = time(NULL); //#defect#Y2K38_SAFETY
printf("Time elapsed = %d seconds\n", endtime - starttime);
//printf( "\r\nsizeof int: %d",  sizeof(int) );
	//coverity[double_free : SUPPRESS]
	free(ptr);

	fooBar();

	return 0;
}

