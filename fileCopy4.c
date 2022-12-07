#include <stdio.h>

/* copy input to output; 2nd version  */
int main()
{
	int c;
	c = getchar() != EOF;

	printf("%d\n", c);
	putchar(c);

	return 0;
}
