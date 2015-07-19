/*
Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions.
*/


#include <stdio.h>
unsigned rightrot(unsigned , unsigned );

main()
{
  	unsigned x;
  	int n;
	printf("\nEnter x =\t"); 
	scanf("%d",&x);	
	printf("\nEnter n =\t");
	scanf("%d",&n);
        printf("%u, %d: %u\n", x, n, rightrot(x, n));
 
}

unsigned rightrot(unsigned x, unsigned n)
{
    	while (n > 0) {
        	if ((x & 1) == 1)
            		x = (x >> 1) | ~(~0U >> 1);
        	else
            		x = (x >> 1);
        	n--;
    	}
    	return x;
}

