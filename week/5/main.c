#include <stdio.h>

/* declares function prototypes of your assembly routines so gcc knows how to
 * call them from your C file!
 */
void my_memset(char *str, char val, int strl);
void my_strncpy(char *dst, char *src, int len);

int main(void)
{
  char a[] = "Hello World!";
  char b[] = "Hello World!";

  /* should print "Hello zzzzz!" */
  my_memset(a+6, 'z', 5);
  printf("%s\n", a);

  /* should print "Hello Hello!" */
  my_strncpy(a+6, b, 5);
  printf("%s\n", a);

  return 0;
}
