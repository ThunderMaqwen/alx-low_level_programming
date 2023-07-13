#include <stdio.h>
/**
 * main - main entry point
 * Description: functions that print the data types
 * Return:0 Always (sucess)
 */
int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of a int: %i  byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
