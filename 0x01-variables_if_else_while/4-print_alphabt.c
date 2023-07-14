#include <stdio.h>
/**
 * main-main entry point
 * Description:print alphapet
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'q' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
