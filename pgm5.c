/*
Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int any(char[], char[]);
char s1[100];
char s2[10];

main()
{
	int i;	
	printf("\nEnter main String\t");
	gets(s1);
	printf("\nEnter substring\t");
	gets(s2);
    	i=any(s1,s2);
	printf("\nThe position of First location starting from 1 is : %d\n",i+1);
}

int any(char s1[], char s2[])
{
    	int i, j, k,l1,l2;
	for (i=0;s2[i]!='\0';i++) {
        	for (j=0;s1[j]!='\0';j++) {
            		if (s1[j]== s2[i]) {
                		return j;
				break;
            		}
        	}
        	
    	}

}
