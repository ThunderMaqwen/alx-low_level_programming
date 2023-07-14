#include <stdio.h>
/**
 * main-main entry point
 * Description:print numbers
 * Return:0 Always (success)
*/
int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}
