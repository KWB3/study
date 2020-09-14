#include <stdio.h>

void wc(const char *pathname)
{
	int count_c = 0, count_l = 0, count_w = 0 , c;
	FILE *fp;
	
	fp = fopen(pathname, "r");
	
	while((c = getc(fp)) != EOF)
	{
		count_c++;
		if(c == '\n')
		{
			count_l++;
			count_w++;
		}
		
		if(c == ' ')
			count_w++;
	}
	
	printf("c = %d, w = %d, l = %d \n", count_c, count_w, count_l);
	fclose(fp);
}
