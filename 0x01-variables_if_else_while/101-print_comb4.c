#include <stdio.h>

/**
 * main -print three combination number
 *
 * Return : always 0
 */

int main(void)
{
        int i = 0;
        int j = i + 1;
        int k = j + 1;

         while (i <= 7)
	 {
		 while(j <= 8)
		 {
		       while (k <= 9)
		       {

			              putchar(i + '0');
		                      putchar(j + '0');
		                      putchar(k + '0');
		                      if (i != 7 ||  j != 8 || k != 9)
				      {
			                     putchar(',');
	                                     putchar(' ')
				      }
				      k++;
		       }
		       j++;

		 }
	         i++;


	}
        putchar('\n');
        return (0);
}



