#include <stdio.h>

#include "foo.h"

int main(void) {
  printf("Start calling foo() ...\n");
  foo(1);
  foo(2);
  foo(3);

  myfunc(0,0);
  myfunc(0,1);
  myfunc(1,0);
  myfunc(1,1);
  myfunc(0,-1);
  myfunc(-1,0);


  return 0;
}
