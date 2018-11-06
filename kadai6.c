// kadai 6
#include <stdio.h>
int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
      return i;
    }
    i++;
  }
  return 0;
}

int main(){
  int input, factor;
  printf("Type in a number: ");
  scanf("%d", &input);
  if(input == 1){ printf("1 is not a prime number.\n"); return 0;}
  while(1){
    factor = getSmallestFactor(input);
    if(factor > 0){
      printf("%d * ", factor);
      input = input / factor;
    }else{
      printf("%d \n", input);
      break;
    }
  }
}
