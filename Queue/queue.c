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
Node *front=NULL;
Node *back=NULL;
void enqueue(int val){
  Node *newNode=createnode(val);
  if(back==NULL){
    front=back=newNode;
    return;
  }
  back->next=newNode;
  back=newNode;
}
void dequeue(){
  if(front==NULL){
    printf("\nQueue underflow!\n");
    return;
  }
  Node *temp=front;
  front=front->next;
  free(temp);
 }
void display(){
  Node *temp=front;
  while(temp!=NULL){
    printf("%d ",temp->val);
    temp=temp->next;
  }
  free(temp);
}
int main(){
  int size;
  printf("Enter size:");
  scanf("%d",&size);
  for(int i=0;i<size;i++){
   int data;
   scanf("%d",&data);
   enqueue(data);
 }
  dequeue();
  display();
  return 0;
}
