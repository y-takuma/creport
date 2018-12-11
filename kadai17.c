// kadai 16
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
     char name[30];
     char email[40];
     struct node* next;
} node;

int main(){
     node *a, *head;
     head = (node*)malloc(sizeof(node));
     a = head;
     //int i = 0;
     while(scanf("%s %s", a->name, a->email)!=EOF){
       a->next = (node*)malloc(sizeof(node));
       a = a->next;
       //i++;
     }
    //i--;
     a->next = NULL;
     a = head;
     while(1){
       if (a->next == NULL){
         break;
       } else {
         printf("name: %s, email: %s\n", a->name, a->email);
         a = a->next;
       }
    }
}
