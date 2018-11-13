// kadai 11
#include <stdio.h>
#include <stdlib.h>
int main(){
  char* p = (char *)malloc(sizeof(char) * 5);
  char* a;
  char* str = (char *)malloc(sizeof(char) * 3);
  printf("文字列を入力して下さい： ");
  a = p;
  for(int i = 0; i < 5; i++){
    scanf("%s", str);
    *p = *str;
    p++;
  }

  p = a;
  printf("配列の中身は以下のとおりです。\n");

  for(int i = 0; i < 5; i++){
    printf("文字列： %c", *p);
    printf("アドレス： %p\n", p);
    p++;
  }
}
