/*
Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else.
*/


#include <stdio.h>
#include <string.h>

void lower(char[]);
char s[100];

main()
{
	int i;	
	printf("\nEnter main String\t");
	gets(s);
	lower(s);
	printf("lower case converted is\n%s\n",s);
}

void lower(char s[])
{
    	int i, j, k;
	for (i=0;s[i]!='\0';i++) {
        	s[i] >='A' && s[i]<='Z' ? s[i]=s[i]-'A'+'a' : -1;
        }

}
