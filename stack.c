#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
   char val;
   struct node *next;
}Node;
Node *top=NULL;
Node *head=NULL;
Node *createnode(char value){
   Node *newnode=(Node *)malloc(sizeof(Node));
   newnode->val=value;
   newnode->next=NULL;
   return newnode;
}

void push_to_stack2(char val){
  Node *newnode=createnode(val);
  newnode->next=head;
  head=newnode;
 }
char pop_2(){
   Node *temp=head;
   char value=temp->val;
   head=head->next;
   free(temp);
   return value;
 }
void push(char val){
  Node *newnode=createnode(val);
  newnode->next=top;
  top=newnode;
  printf("\n%c pushed to stack!\n",val);
 }
char pop(){
   Node *temp=top;
   char value=temp->val;
   top=top->next;
   printf("\n%c is popped out!\n",temp->val);
   free(temp);
   return value;
 }
void display(){
 Node *temp=top;
 while(temp!=NULL){
   printf("%c ",temp->val);
   temp=temp->next;
 }
 }
char alpha;
int main(){
   char string[5];
   fgets(string,sizeof(string),stdin);
   for(int i=0;string[i]!='\0';i++){
       char val=string[i];
       push(val);
   }
   int choice;
   while(100){
     printf("\n1.ctrl z\n2.ctrl y\n3.Display\nEnter choice:");
     scanf("%d",&choice);
     switch(choice){
        case 1:
            alpha=pop();
            push_to_stack2(alpha);
            break;
        case 2:
            alpha=pop_2();
            push(alpha);
            break;
        case 3:
            display(); 
            break;
        default:
            printf("Invalid choice!\n");
    }
}
return 0;
}