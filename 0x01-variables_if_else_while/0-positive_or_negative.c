#include <stdlib.h>
#include <time.h>
#include <stdio.h>

<<<<<<< HEAD
/**
 * main - Entry point
 * Return: Always 0 (Success)
  */

=======
/* betty style doc for function main goes there */

/**
 * main - Test the code
 *
 * Return: Always 0 on success
 */
>>>>>>> 2e849a38bece7149c77fbac58a7a08192bfda314
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
<<<<<<< HEAD
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n); 
        return (0);
=======
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
>>>>>>> 2e849a38bece7149c77fbac58a7a08192bfda314
}
