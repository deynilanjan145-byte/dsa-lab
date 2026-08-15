#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int val;
   struct node *next;
}Node;
Node *top=NULL;
Node *head=NULL;
Node *createnode(int value){
   Node *newnode=(Node *)malloc(sizeof(Node));
   newnode->val=value;
   newnode->next=NULL;
   return newnode;
}
void push_to_stack1(int value){
   Node *newnode=createnode(value);
   newnode->next=top;
   top=newnode;
}
void push_to_stack2(int value){
   Node *newnode=createnode(value);
   newnode->next=head;
   head=newnode;
}
int pop_from_stack1(){
  Node *temp=top;
  int value=temp->val;
  top=top->next;
  free(temp);
  return value;
 }
int pop_from_stack2(){
  Node *temp=head;
  int value=temp->val;
  head=head->next;
  free(temp);
  return value;
 }
void display(){
   Node *temp=head;
   while(temp!=NULL){
     printf("%d ",temp->val);
     temp=temp->next;
   }
}
int main(){
    int size;
    printf("Enter the size of stack:");
    scanf("%d ",&size);
    for(int i=0;i<size;i++){
      int value;
      scanf("%d",&value);
      push_to_stack1(value);
    }
    for(int i=0;i<size;i++){
      int val=pop_from_stack1();
      push_to_stack2(val);
    }
    
    display();
    return 0;
}