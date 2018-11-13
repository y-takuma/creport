// kadai 10
#include <stdio.h>
#include <stdlib.h>
int main(){
  int* p = (int *)malloc(sizeof(int)*5);
  int* a;
  printf("整数値を5個入力してください。ひとつ入力するごとに改行を押してください。：\n ");
  a = p;
  for(int i = 0; i < 5; i++){
    scanf("%d", p);
    p++;
  }

  p = a;
  printf("配列の中身は以下のとおりです。\n");

  for(int i = 0; i < 5; i++){
    printf("値： %d", *p);
    printf("アドレス： %p\n", p);
    p++;
  }
}
