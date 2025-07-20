#include<stdio.h>
int maim(){
  int n=5, fact=1;
for(int i=1; i<=n; i++)
  fact*=i;
printf("factorial=%d",fact);
return 0;
}
