/*
Exercise 2-7.Write a function invert(x,p,n) that returns x with the n bits that 
begin at position p inverted (i.e., 1 changed into 0 and vice versa), 
leaving the others unchanged.
*/

 
#include <stdio.h>
unsigned invert(unsigned, int , int );

main()
{
 	int x, p, n;
	printf("\nEnter x =\t"); 
	scanf("%d",&x);	
	printf("\nEnter n =\t");
	scanf("%d",&n);
	printf("\nEnter p =\t");
 	scanf("%d",&p);	
	printf("%u, %d, %d: %u\n", x, n, p, invert((unsigned)x, n, p));
}


unsigned invert(unsigned x, int p, int n)
{
	unsigned y;
 	y = x ^ (~(~0U << n) << p);
	return y;
}
 
