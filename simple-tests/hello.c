#include <stdio.h>

int foofn (int a) {
  return a;
}

typedef struct {
  int foo;
} foobar;

int main (void) {
  int foo = 333;

  foobar fb; 
  fb.foo = 9999;
  

  //f.foo = 9999;

  int (*funptr)(int) = &foofn;

  printf("gugukseli %i", (*funptr)(11));
  printf("lala %i", fb.foo);
  return 0;
}
