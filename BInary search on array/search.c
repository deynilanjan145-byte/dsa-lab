#include<stdio.h>
#include<stdlib.h>
void sort(int *p,int size){
  for(int i=0;i<size-1;i++){
   for(int j=0;j<size-i-1;j++){
      int temp=p[j];
      if(p[j]>p[j+1]){
         p[j]=p[j+1];
         p[j+1]=temp;
     }
  }
}
}
int search(int *p,int val,int size){
    int low=0;int high=size-1;
    int mid;
    while(low<=high){
       mid=(low+high)/2;
       if(p[mid]==val){
           return mid;
       }
       else if(val<p[mid]){
           high=mid-1;
       }
       else{
           low=mid+1;
      }
}
  return -1;
}
int main(){
   int size;
   printf("Enter size:");
   scanf("%d",&size);
   int *p=(int *)malloc(size*sizeof(int));
   for(int i=0;i<size;i++){
     scanf("%d",&p[i]);
   }
   sort(p,size);
   int value;
   printf("Enter value:");
   scanf("%d",&value);
   int result=search(p,value,size);
   if(result!=-1){
     printf("Value found at index:%d",result);
    }
  else{
    printf("Value not found!");
  }
 return 0;
}
