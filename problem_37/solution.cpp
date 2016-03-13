#include<stdio.h>

int main(){

 int v,t;

 while((scanf("%d%d",&v,&t))==2){

   t=2*t*v;
  printf("%d\n",t);
 }
 return 0;
 }