#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node *next;
}Node;
void value(Node *n){
    while(n!=NULL){
       scanf("%d",&n->val);
       n=n->next;
    }
}
void printNode(Node *n){
  while(n!=NULL){
    printf("%d ",n->val);
    n=n->next;
  }
}
void add(Node *p,Node *q){
 int n;
 printf("\nEnter value to be inserted:");
 scanf("%d",&n);
if(p==NULL){
    p->val=n;
}
else{
  Node *new=(Node *)malloc(sizeof(Node));
  new->val=n;
  new->next=NULL;
  q->next=new;
}
}
int main(){
  Node *n1=(Node *)malloc(sizeof(Node));
  Node *n2=(Node *)malloc(sizeof(Node));
  Node *n3=(Node *)malloc(sizeof(Node));
  n1->next=n2;
  n2->next=n3;
  n3->next=NULL;
  printf("Enter elements:");
  Node *head=n1;
  Node *tail=n3;
  value(head);
  printNode(head);
  add(head,tail);
  printNode(head);
  return 0;
}