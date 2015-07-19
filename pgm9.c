/*
2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
in x. Explain why. Use this observation to write a faster version of bitcount.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	int num,x;
	printf("\nEnter number\t");
	scanf("%d",&x);
	num=bitcount((unsigned)x);
	printf("\nNumber of 1 bit is\t %d\n",num);
}

int bitcount(unsigned x)
{
    	int b;

    	for(b = 0;x != 0; x &= (x-1))
        	b++;
    	return b;
}

