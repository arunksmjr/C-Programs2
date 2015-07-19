/*
Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
*/

#include <stdio.h>
 
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
 	return (x & ((~0 << (p + 1)) | (~(~0 << (p + 1 - n))))) | ((y & ~(~0 << n)) << (p + 1 - n));
}
 
main(void)
{
 	unsigned k;
 	int x, p, n, y;
	printf("\nEnter x =\t"); 
	scanf("%d",&x);	
	printf("\nEnter n =\t");
	scanf("%d",&n);
	printf("\nEnter p =\t");
 	scanf("%d",&p);
	printf("\nEnter y =\t"); 
	scanf("%d",&y);	
	
	k = setbits((unsigned)x, p, n, (unsigned)y);
 	printf("%u\n", k);
    
}
