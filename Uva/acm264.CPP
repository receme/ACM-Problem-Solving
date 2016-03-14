#include<stdio.h>
int main(){

long x,m,i,j,k,n,o,p;

while((scanf("%ld",&n))!=EOF){

i=0;
x=1;

for(;;){
 
 if(i==n)break;
 if(x%2==0){
 j=1;
 k=x;
 for(m=0;m<x;m++){
  i++;
  o=j;
  p=k; 
  if(i==n)break;
  j++;
  k--; } }
 else{
 j=x;
 k=1;
 for(m=0;m<x;m++){
  i++;
  o=j;
  p=k; 
  if(i==n)break;
  j--;
  k++; } }
 x++;
 }

printf("TERM %ld IS %ld/%ld\n",n,o,p);
}

 return 0;
 }

