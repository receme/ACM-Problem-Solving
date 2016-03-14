#include <stdio.h>

int main(void) {
  long long x = 1;
  

  while (scanf("%ld", &x)==1) {
         
      x += 1;
      x /= 2;
      printf("%ld\n", (3 * ((2 * (x * x)) - 3)));
      
  }
  return 0;
}
