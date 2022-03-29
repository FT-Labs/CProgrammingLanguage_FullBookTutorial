#include <stdio.h>


// This remove all occurences of char in a string
void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}


int main()
{
	char s[] = "Hellooooo, Wooooorld!";

	printf("%s\n", s);
	squeeze(s, 'o');
	printf("%s\n", s);


	return 0;
}
