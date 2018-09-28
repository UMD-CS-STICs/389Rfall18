#include <stdio.h>

/* declare the function prototype so gcc knows how to use fib() */
int fib(int);

int main(void)
{
  int a = fib(18);
  printf("got fib(18): %d\n", a);
  return 0;
}
