#include <stdio.h>


enum bool { false, true };
typedef enum bool bool; // To be able to initialize as bool, not enum bool

enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };

int main (int argc, char *argv[])
{
	bool a = true;

	if (a)
		printf("a is true\n");

	a = false;

	if (!a)
		printf("a is false\n");

	enum escapes escape = BELL;

	escape = TAB;
	printf("%c", escape);
	escape = NEWLINE;
	printf("%c", escape);

	
	return 0;
}

