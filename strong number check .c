#include<stdio.h>
int main (){
  int n=145,sum=0, temp=n;
while(temp){
int r=temp%10,fact=1;
for(int i=1;i<=r; i++) fact*=i;
sum+=fact;
temp /=10;
}
if(sum==n)
  printf("strong number\n");
else
  printf("not a strong number\n");
return 0;
}
