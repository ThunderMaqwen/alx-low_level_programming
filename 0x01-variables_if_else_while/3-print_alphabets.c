#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-main entry point
 * Description:print alphpet lowercase and upper
 * Return:0 Always (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	putchar ch = 'a';
	putchar x = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
