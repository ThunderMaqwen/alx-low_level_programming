#include <stdio.h>
/**
 * main-main entry point
 * Description:print numbers
 * Return:0 Always (success)
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
