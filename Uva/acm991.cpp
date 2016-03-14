//catalan number

#include<stdio.h>

unsigned long long n,i,j=0,k,p,m;

int main(){

while(scanf("%llu",&n)==1){
  if(j==1)
   printf("\n");
  k=1;
  for(i=1;i<=n*2;i++)
   k=k*i;

  m=1;
  for(i=1;i<=n;i++)
   m=m*i;

  p=1;
  for(i=1;i<=n+1;i++)
   p=p*i;

  k=(k/m)/p;

  printf("%llu\n",k);
 j=1;
}

return 0;
}
