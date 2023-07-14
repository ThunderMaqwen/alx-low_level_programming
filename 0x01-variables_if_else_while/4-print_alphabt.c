#include <stdio.h>
/**
 * main-main entry point
 * Description:print alphapet
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
