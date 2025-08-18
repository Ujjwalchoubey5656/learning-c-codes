#include<stdio.h
int main(){
  char str[]="hello world from c language";
 int count =1;
for(int i=0; str[i]!='\0'; i++){
if(str[i]=='')count++;
  }
  printf("word count: %d\n", count);
return 0;
}
