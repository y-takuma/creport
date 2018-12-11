// hattenkadai 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  int fact= 1;

  /* ネイピア数 */
  double napier = 1.0;

  for(i=1;i<10;i++){
    fact *= i;
    napier += 1.0 / fact;
  }
  printf("e = %f\n", napier);
  return 0;
}
