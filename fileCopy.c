#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	/* send a EOF through the console
        by hitting CTRL+D in Unix or CTRL+Z in Windows */

	return 0;
}

