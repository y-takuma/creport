// kadai 13
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b;
  printf("二つの整数値を入力して下さい:\n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("変数 x の値は%d, 変数yの値は%dです.\n", *&a, *&b);
  void exchange(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
    printf("exchange()を呼び出した後の変数xの値は%d, 変数yの値は%dです.\n", *x, *y );
  }
  exchange(&a, &b);
}
