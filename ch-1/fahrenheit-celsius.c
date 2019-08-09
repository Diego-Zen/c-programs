#include <stdio.h>

/**
 * main - entry program Print fahrenheit-celsius table
 *
 * Return: Success
 *
 */

int main(void)
{
	int fahr;

	printf("%3s %6s\n", "Far", "Celc");
	for (fahr = 300; fahr >= 0; fahr -= 20)
	{
		/* %3.0f floating-point printed at least three chars wide */
		/* with no decimal point and no fraction digits*/
		/* %6.1f six chars wide, 1 digit after decimal point*/
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}

	return (0);
}
