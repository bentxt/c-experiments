#include <stdio.h>

int main(void) {

	typedef struct {
		int x; 
		int b;
	} point;

	point mypoint;
	mypoint.x = 99;
	mypoint.y = 11;





  int x = 99;
  int *p1, *p2;

  p1 = &x;
  p2 = p1;

  /* print the value of x twice */
  printf("\nValues at p1 and p2: %d %d\n\n", *p1, *p2); 

  /* print the address of x twice */
  printf("Addresses pointed to by p1 and p2: %p %p", (void *) p1, (void *) p2); 

  return 0;
}
