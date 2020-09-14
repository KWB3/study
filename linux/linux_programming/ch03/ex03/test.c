#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *fp;
	char s[100];
	
	fp = fopen(argv[1], "r");
	
	while(fgets(s, 100, fp) != NULL)
		printf("%s", s);
		
	fclose(fp);
}
