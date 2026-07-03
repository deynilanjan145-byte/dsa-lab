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
bool insearch(Node *head,int value){
  while(head!=NULL && head->val!=value){
    head=head->next;
  }
  if(head==NULL){
    return false;
  }
  else{
    return true;
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
  Node *temp=n1;
  value(temp);
  printNode(temp);
  printf("\nEnter the value:");
  int val1;
  scanf("%d",&val1);
  bool n=insearch(temp,val1);
  if(n==true){
    printf("\n%d is present in the list\n",val1);
  }
  else{
    printf("\nNot present!\n");
  }
  return 0;
}