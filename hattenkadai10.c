// hattenkadai 10
#include <stdio.h>
#define pi 3.14

int main(){
  int n;
  printf("数字を入力してください\n");
  scanf("%i", &n);
  printf("半径%dの時、円面積は%fです\n", n, n*n*pi);
}
