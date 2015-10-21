#include <stdio.h>
#include <string.h>
#include "islc.h"

int main(int argc, char* argv[]) {
  char c;
  c = getchar();

  while (c != EOF) {
    if (islc(c) == 1) {
      c = c + 32;
    }
    printf("%c",c);
    c = getchar();
  }

  return 0;
}
