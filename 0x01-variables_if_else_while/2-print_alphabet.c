#include <stdio.h>
/**
 * main-main entry point
 * Description:printing alphapet
 * Return:0 Always (success)
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
