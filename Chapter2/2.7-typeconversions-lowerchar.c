#include <stdio.h>


int lower_(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch + 'a' - 'A';
	else
		return ch;
}


int main (int argc, char *argv[])
{
	char ch = 'S';

	printf("%c\t", ch);

	ch = lower_(ch);

	printf("%c\n", ch);
	
	return 0;
}
