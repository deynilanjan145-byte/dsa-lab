#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int val;
 struct node *left;
 struct node *right;
}Node;
Node *createnode(int value){
  Node *root=(Node *)malloc(sizeof(Node));
  root->val=value;
  root->left=NULL;
  root->right=NULL;
  return root; 
}
Node *insert(Node *root,int value){
  if(root==NULL){
   return createnode(value);
  }
  else{
    if(value<root->val){
       
       root->left=insert(root->left,value);
 
     }
    else{
     
       root->right=insert(root->right,value);
}
}
 return root;
}
int main(){
   int size=5;
   
   int *p=(int *)malloc(size*sizeof(int));
   p={5,2,1,3,4};
   printf("Enter elements:");
   Node *root=NULL;
   for(int i=0;i<size;i++){    
     root=insert(root,p[i]);
  }
   free(p);
   return 0;
}    
       

