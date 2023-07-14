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
			putchar(ch + 48);
			putchar(44);
			putchar(' ');
			ch++;
		}
	putchar('\n');
	return (0);
}
