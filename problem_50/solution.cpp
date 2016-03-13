
#include<stdio.h>


int main(){
  long i,j,k,n;

  while(scanf("%ld",&n)==1){
   if(n<=0||n>10000)continue;

   if(n%2==0||n%5==0){
    printf("0\n");
       continue;}
  k=1;
 i=1;
  for(;;){
    if(k<n)
    k=k*10+1;
    i=i+1;
   j=k%n;
  if(j==0)break;
  else k=j;
 }

 printf("%ld\n",i);
  }
 return 0;
}
