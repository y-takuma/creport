// kadai 7
#include <stdio.h>

int series(int a){
  if(a == 0){
    return 1;
  }else{
    return a * series(a-1);
  }
}
int main(){
  int n;
  printf("Type in a number: ");
  scanf("%d", &n);
  int res = series(n);
  printf("%dの階乗は%dです\n", n, res);
}
