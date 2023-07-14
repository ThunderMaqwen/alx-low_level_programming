#include <stdio.h>
/**
 * main-main entry point
 * Description: print hexadecimal
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = '0' ;

	while (ch <= 'f')
	{

		putchar(ch);
		if (ch == '9')
			ch+=39;
		ch++;
	}
	putchar('\n');
	return (0);
}
