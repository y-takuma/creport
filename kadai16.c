// kadai 16
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
     char name[30];
     char email[40];
} personData;

typedef struct company {
     personData ceo;
     personData employees[100];
} companyData;

int main(){
  int i = 1;
  companyData c;

  scanf("%s %s", c.ceo.name, c.ceo.email);

  printf("CEOの名前：%s\n", c.ceo.name);
  printf("CEOのメアド:%s\n",c.ceo.email);
  printf("\n");
  while( scanf("%s %s", c.employees[i].name, c.employees[i].email) != EOF){
    printf("従業員の名前：%s\n", c.employees[i].name);
    printf("従業員のメアド:%s\n",c.employees[i].email);
    printf("\n");
    i++;
  }
}
