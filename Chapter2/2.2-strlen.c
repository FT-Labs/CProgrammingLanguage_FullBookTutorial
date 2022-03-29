#include <stdio.h>


int strlen_(char s[])
{
	int i = 0;

	while(s[++i] != '\0');	
	return i;
}


int main()
{
	char hello[] = "Hello, World!";

	int len = strlen_(hello);

	printf("Size is : %d", len);

	return 0;
}
