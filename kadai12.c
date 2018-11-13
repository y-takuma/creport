// kadai 12
#include <stdio.h>
#include <stdlib.h>

int main(){
  char* str = (char *)malloc(sizeof(char) * 100);
  char* p = (char *)malloc(sizeof(char) * 5);
  printf("文字列を入力して下さい:");
  scanf("%s", str);
  p = str;

  while(*p != '\0'){
    printf("%c", *p);
    p++;
  }

  printf("\n");

  while(p >= str){
    printf("%c", *p);
    p--;
  }

  printf("\n");

}
