#include <stdio.h>

void secret(void) {
  printf("you shouldn't be here\n");
}

void other_secret(void) {
  printf("you shouldn't be here either!\n");
}

int main(void) {
    char buf[16];

    printf("hey plz gib data\n");
    gets(buf);
    printf("thx\n");

    return 0;
}
