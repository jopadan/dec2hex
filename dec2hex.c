#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		fprintf(stderr, "Usage: dec2hex <decimal> <decimal> ...\n");
		exit(EXIT_FAILURE);
	}

	for(int i=1; i < argc; i++)
	{
		fprintf(stdout, "%.llX\n", strtouq(argv[i], NULL, 10));
	}

	exit(EXIT_SUCCESS);
}
