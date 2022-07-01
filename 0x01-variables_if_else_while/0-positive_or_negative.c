#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *
 *  * main- Entry Point
 *
 *   *
 *
 *    * Return: Always 0 (success)
 *
 *     *
 *
 *      */

int main(void)

{

	        int n;



		        srand(time(0));

			        n = rand() - RAND_MAX / 2;

				        /* your code goes there */

				        if (n > 5)

						        {

								        printf("Last digit of %d is %i and is greater than 5", n, n);

									        }



					        if (n == 0)

							        {

									        printf("Last digit of %d is 0", n);

										        }



						        if (n < 6 && n != 0)

								        {

										        printf("Last digit of %d and is %d and is less than 6 and not 0", n, n);

											        }

							        return (0);

}
