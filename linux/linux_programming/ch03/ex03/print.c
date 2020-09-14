#include "print.h"
#include <stdio.h>

void printfile(const char *pathname)
{
	char s[MAXLINE];
	FILE *fp;
	fp = fopen(pathname, "r");
	
	while(fgets(s, MAXLINE, fp) != NULL)
		printf("%s", s);
		
	fclose(fp);
}
