#include <stdio.h>
void main(){
 int n,sum=0,i=0;
 printf("Enter limit\n");
 scanf("%d",&n);
  while(i<=n){
  sum=sum+i;
  i++;
 }
 printf("sum of %d numbers = %d \n ",n,sum);
}
