#include<stdio.h>


long i,j,k,n,flag;

int main(){

  while(scanf("%ld",&n)==1){
    if(n==0) break;

  flag=0;
  for(i=1;i<=100;i++){

      if((i*i*i)<n)
       continue;

    for(j=0;j<=i;j++){
      k=i*i*i -j*j*j;

      if(k==n){
       flag=1;
       goto q; }

    }
  }

  q:

  if(flag==0)
   printf("No solution\n");
  else
   printf("%ld %ld\n",i,j);

  }

return 0;
  }
