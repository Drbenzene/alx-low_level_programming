#include <stdio.h>
#include <time.h>

/* the main block is main
 * Getting a random number and printing it
 *Condition - If it's positive, Negative or zero
 * Return is 0
 */

int main(void)

{

  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)

    printf("%i is positive\n", n);
  else if (n < 0)
    printf("%i is negative\n", n);
  else
    printf("%i is zero\n", n);

  return (0);

}
