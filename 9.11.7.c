#include <stdio.h>

int letter_position(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ch - 'a' + 1;
	if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 1;
	return -1;
}

int main(void)
{
	int input;

	while ((input = getchar()) != EOF) {
		int position = letter_position((char)input);

		if (position != -1)
			printf("'%c' is a letter; its position is %d.\n", input, position);
		else
			printf("'%c' is not a letter.\n", input);
	}

	return 0;
}
