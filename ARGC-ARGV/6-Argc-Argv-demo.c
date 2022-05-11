#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i;

	printf("argc(Argument Count) = %d\n", argc);
	printf("Lets print the contents of argv[]\n");
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
