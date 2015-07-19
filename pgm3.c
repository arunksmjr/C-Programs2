/*Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.*/


#include <stdio.h>
#include <string.h>

int htoi(char s[]);
char s[]="0xff";

int main()
{
	int result;
    	printf("\nEnter Hexadecimal\t");
	gets(s);
	result=htoi(s);
    	printf("%d\n", result);
  
}

int htoi(char s[])
{
  	int result = 0;
  	int start = 0;

  	if (strlen(s) > 2) {
    	char first = s[0];
    	char second = s[1];

    		if (first == '0' && (second == 'x' || second == 'X')) {
      			start = 2;
    		}
	}

  	int i;
  	char c;
  	for (i = start; (c = s[i]) != '\0'; i++) {
  		int v;
    		if ('0' <= c && c <= '9') {
      			v = c - '0';
    		}
		else if ('a' <= c && c <= 'f') {
      			v = 10 + c - 'a';
    		}
		else if ('A' <= c && c <= 'F') {
    			v = 10 + c - 'A';
		}    
		else {
      			printf("Error: Illegal hexadecimal digits: %s\n", s);
      			return 0;
    		}
    		result = result * 16 + v;
  	}
  	return result;
}
