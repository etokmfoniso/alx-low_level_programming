#include <stdio.h>
/**
 * main - prints fixx and buzz
 *
 * Return: void
 */
int main(void)
{

	    int i;



	        for (i = 1; i <= 100; i++)

			    {

				            if ((i % 3 == 0) && (i % 5 == 0))

						                printf("fizzbuzz ");

					            else if (i % 3 == 0)

							                printf ("fizz ");

						            else if (i % 5 == 0)

								                printf("buzz ");

							            else

									                printf("%i ", i);

								        }

		    return 0;

}


