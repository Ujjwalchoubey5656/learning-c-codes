#include<stdio.h>
int main(){
  int n=1234,sum=0;
while(n !=0) {
sum+=n%10;
n/=10;
}
printf("sum=%d",sum);
return 0;
}
