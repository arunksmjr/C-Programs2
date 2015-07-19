/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.
*/

#include<stdio.h>
#include <limits.h>

main(void)
{
    	printf("Range of Char %d\n", CHAR_BIT);
	printf("Range of Char Min %d\n", CHAR_MIN); 	
	printf("Range of Char Max %d\n", CHAR_MAX);
 	
 	printf("Range of int Min %d\n", INT_MIN);
 	printf("Range of int Max %d\n", INT_MAX);
 	printf("Range of long Min %ld\n", LONG_MIN);       
 	printf("Range of long Max %ld\n", LONG_MAX);       
 	printf("Range of short Min %d\n", SHRT_MIN);
 	printf("Range of short Max %d\n", SHRT_MAX);
 	printf("Range of unsigned char %u\n", UCHAR_MAX);  
 	printf("Range of unsigned long %lu\n", ULONG_MAX); 
 	printf("Range of unsigned int %u\n", UINT_MAX);    
 	printf("Range of unsigned short %u\n", USHRT_MAX);
}
