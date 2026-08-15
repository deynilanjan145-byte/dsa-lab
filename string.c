#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
   char *str=NULL;
   int size=0;
   char ch;
   int freq[26]={0};
   printf("Enter string:");
   while((ch=getchar())!='\n'){
       str=realloc(str,(size+1)*sizeof(char));
       str[size]=ch;
       size++;
   }
   str=realloc(str,(size+1)*sizeof(char));
   str[size]='\0';
   for(int i=0;str[i]!='\0';i++){
      freq[str[i]-'a']++;
   }
   for(int i=0;i<26;i++){
     if(freq[i]>0){
        printf("%c--->%d\n",'a'+i,freq[i]);
    }
}
return 0;
}