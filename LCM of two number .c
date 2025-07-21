#include<stdio.h.
int main(){
  int a=15, b=20,lcm;
int max=(a>b) ? a:b;
while(1){
if(max%a==0 &&  max % b==0) {
lcm=max;
break;
}
max++;
}
printf("lcm: %d\n",lcm);'
  return 0;
  }
