/*
Write a loop equivalent to the for loop above without using && or ||.
*/

#include <stdio.h>
#define MAXLINE 1000

int max;

char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */

int getline1(void);
void copy(void);

/* print longest input line; specialized version */

main()
{
	int len;
	extern int max;
	extern char longest[];
	max = 0;
	while ((len = getline1()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
		if (max > 0) /* there was a line */
			printf("%s", longest);
		return 0;
}

/* getline: specialized version */
int getline1(void)
{
	int c, i;
	extern char line[];
	for(i=0;i<MAXLINE-1;i++){
		c=getchar();
		if(c==EOF)
			break;
		if(c=='\n')
			break;
		line[i]=c;	
	}
	
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

/* copy: specialized version */
void copy(void)
{
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}