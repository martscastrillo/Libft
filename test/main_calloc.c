#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t count, size_t size);



int main( void )
{
int *numPtr;


 numPtr = (int *)calloc( 40, sizeof(int) );
 printf( "%d\n", *numPtr);

int *numPtr2;


 numPtr2 = ft_calloc( 40, sizeof(int) );
 printf( "%d\n", *numPtr2);
}