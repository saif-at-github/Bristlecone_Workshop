#include <stdio.h>

#include "foo.h"

int main(void) {
  printf("Start calling foo() ...\n");
  foo(1);
  foo(2);
  foo(3);
  return 0;
}
