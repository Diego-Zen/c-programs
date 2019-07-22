#include <stdio.h>

/**
 * main - entry program Print fahrenheit-celsius table
 *
 * Return: Success
 *
 */

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("%3s %6s\n", "Far", "Celc");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		/* %3.0f floating-point printed at least three chars wide */
		/* with no decimal point and no fraction digits*/
		/* %6.1f six chars wide, 1 digit after decimal point*/
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return (0);
}
