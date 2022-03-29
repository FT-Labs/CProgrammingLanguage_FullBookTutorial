#include <stdio.h>



int atoi_(char s[])
{
	int i, n = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');

	return n;
}


int main (int argc, char *argv[])
{
	char s[] = "14356";

	int num = atoi_(s);

	printf("%d\n", num);

	char s_false[] = "123a";

	num = atoi_(s_false);

	printf("%d", num);

	
	return 0;
}
