#include<stdio.h>
int main(){
  int n=153,temp=n,sum=0;
while(temp !=0){
int digit =temp%10;
sum+=pow(digit,3);
temp/=10;
}
if(sum==n)
  printf("armstrong");
else
  printf("not armstrong");
return 0;
}
