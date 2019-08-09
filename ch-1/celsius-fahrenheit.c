#include <stdio.h>

/**
 * main - entry program Print celsius-fahrenheit table
 *
 * Return: Success
 *
 */

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -100; /* lower limit of temperature table */
	upper = 100; /* upper limit */
	step = 10; /* step size */

	celsius = lower;
	printf("%7s %10s\n", "Celsius", "Fahrenheit");
	while (celsius <= upper)
	{
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		/* %3.0f floating-point printed at least three chars wide */
		/* with no decimal point and no fraction digits*/
		/* %6.1f six chars wide, 1 digit after decimal point*/
		printf("%7.0f %10.0f\n", celsius, fahr);
		celsius += step;
	}

	return (0);
}
