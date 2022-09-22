#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "0123456789";
	int i = strlen(s);
	printf("%i\n%d\n", i, s[10]);
}
