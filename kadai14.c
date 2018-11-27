// kadai 14
#include <stdio.h>
#include <stdlib.h>

struct products {
  char goodscode[10];
  char goodsname[40];
  int  goodsprice;
};

int main(){
  int i;
  struct products goods[4];

  for(i = 0; i < 3; i++){
    printf("商品%iの商品コードは?\n", i);
    scanf("%s", goods[i].goodscode);
    printf("商品コード%sの商品名は?\n", goods[i].goodscode);
    scanf("%s", goods[i].goodsname);
    printf("%sの値段は?\n", goods[i].goodsname);
    scanf("%d", &(goods[i].goodsprice));
  }
  printf("\n");
  for(i = 0; i < 3; i++){
    printf("商品コード %d: %s, ", i, goods[i].goodscode);
    printf("商品名:%s\n", goods[i].goodsname);
    printf("値段:%d\n", goods[i].goodsprice);
  }
}
