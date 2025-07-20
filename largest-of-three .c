#include<stdio.h>
int main(){
  int a =12, b=14,c=15;
int max=(a>b&&a>c) ? a:(b>c? b:c);
printf("max=%d",max);
return 0;
}
