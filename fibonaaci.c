#include<stdio.h>
void fibo(int n,int a,int b){
  if(n<=0){
    return;
  }
  printf("%d ",a);
  fibo(n-1,b,a+b);
}
int main(){
  int n;
  printf("Enter terms:");
  scanf("%d",&n);
  fibo(n,0,1);
  return 0;
}
