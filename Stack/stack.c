#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int val;
  struct node *next;
}Node;
Node *createnode(int value){
  Node *newNode=(Node *)malloc(sizeof(Node));
  newNode->val=value;
  newNode->next=NULL;
  return newNode;
}
Node *top=NULL;
void push(int val){
  Node *newNode=createnode(val);
  newNode->next=top;
  top=newNode;
printf("\n%d pushed in the stack!\n",newNode->val);
}
void pop(){
  Node *temp=top;
  top=top->next;
  printf("\n%d is popped from stack!\n",temp->val);
  free(temp);
}
void display(){
  Node *temp=top;
  while(temp!=NULL){
   printf("%d ",temp->val);
   temp=temp->next;
  }
}
int main(){
  int size;
  printf("Enter size:");
  scanf("%d",&size);
  for(int i=0;i<size;i++){
   int data;
   scanf("%d",&data);
   push(data);
  }
  pop();
  display();
return 0;
}
