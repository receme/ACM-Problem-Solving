
#include<stdio.h>

int main(){

long i,n;

while((scanf("%ld",&n))==1){
 if(n==0)break;
 if(n>=101){
 i=n-10;
 printf("f91(%ld) = %ld\n",n,i);
 }

else 
  printf("f91(%ld) = 91\n",n);
 }
   return 0;
   }

