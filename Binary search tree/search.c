#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int val;
   struct node *left;
   struct node *right;
 }Node;
Node *createnode(int val){
   Node *newNode=(Node *)malloc(sizeof(Node));
   newNode->val=val;
   newNode->left=NULL;
   newNode->right=NULL;
   return newNode;
}
Node *insert(Node *root,int val){
   if(root==NULL){
     return createnode(val);
}
  else{
     if(val<root->val){
       root->left=insert(root->left,val);
    }
    else{
       root->right=insert(root->right,val);
  }
 }
 return root;
}
bool search(Node *root,int val){
  if(root==NULL){
     return false;
  }
  if(val==root->val){
       return true;
  }
  else{
    if(val<root->val){
      return search(root->left,val);
     }
    else{
      return search(root->right,val);
    }
  }
 }
int main(){
  int size;
  printf("Enter size:");
  scanf("%d",&size);
  int *p=(int *)malloc(size*sizeof(int));
  Node *root=NULL;
  printf("Enter elements:");
  for(int i=0;i<size;i++){
    scanf("%d",&p[i]);
    root=insert(root,p[i]);
}
 int a;
 printf("Enter the element:");
 scanf("%d",&a);
 if(search(root,a)==true){
   printf("Value found!\n");
 }
 else{
   printf("Value not found!");
 }
 return 0;
}
 
