#include <stdio.h>

/* copy input to output; 2nd version  */
int main()
{
	int c;
	char f;
	char n;
	
	while ((c = getchar()) != EOF) {
		if ((char)c != "\n") {
			f = (char)c;
		}
		// f = (char)c;
		putchar(c);
	}
	// f = (char)c;

	printf("The last value of c: %d\n", c);
	printf("The last char is: %c\n", f);
	printf("The value of EOF: %d\n", EOF);

	return 0;
}
