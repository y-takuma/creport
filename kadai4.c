// kadai 4
#include <stdio.h>
int main(){
  int x;
  int y;
  printf("数字を入力してください\n");
  scanf("%i", &x);
  printf("数字を入力してください\n");
  scanf("%i", &y);
  int z = x + y;
  printf("%i + %i = %i\n", x, y, z);
}
