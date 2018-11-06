// hattenkadai 1
#include <stdio.h>
#include <math.h>
int main(){
  int i = 0;
  double arctan1 = 0;
  while(i < 10){
    arctan1 += pow(-1,i) / (i*2 + 1);
    if(i % 100 == 0){
      printf("pi = %f\n", arctan1 * 4);
    }
    i++;
  }
}
