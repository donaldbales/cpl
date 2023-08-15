// c program to demonstrate
// example of strlen() function.
#include <stdio.h>
#include <string.h>

int main()
{
	// defining string
	char str[] = "GeeksforGeeks";

	// getting length of str using strlen()
	size_t length = strlen(str);
	printf("Length of string is : %lu\n", length);

	return 0;
}

