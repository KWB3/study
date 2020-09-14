#include <stdio.h>
#include "print.h"
#include "word.h"

int main(int argc, char *argv[])
{
	int i = 1;
	
	while(argv[i] != NULL)
	{
		printfile(argv[i]);
		wc(argv[i]);
		
		i++;
	}
}
