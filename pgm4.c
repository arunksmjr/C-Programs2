/*
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
*/


#include <stdio.h>
#include <string.h>

void squeeze(char[], char[]);
char s1[100];
char s2[10];

main()
{
	int i;	
	printf("\nEnter main String\t");
	gets(s1);
	printf("\nEnter substring\t");
	gets(s2);
    	squeeze(s1,s2);
	printf("%s\n",s1);
}

void squeeze(char s1[], char s2[])
{
    	int i, j, k,l1,l2;
	for (i=0;s2[i]!='\0';i++) {
        	for (j=k=0;s1[j]!='\0';j++) {
            		if (s1[j]!= s2[i]) {
                		s1[k] = s1[j];
				k++;
            		}
        	}
        	s1[k] = '\0';
    	}

}
