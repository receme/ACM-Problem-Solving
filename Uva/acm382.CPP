#include<stdio.h>
int main(){
long i,m,n,a[100],sum,c;
sum=0;
while(scanf("%ld",&n)==1){
  if(n==0){printf("END OF OUTPUT\n");break;}

  if(sum==0){printf("PERFECTION OUTPUT\n");sum=1;}
  if(n==1){printf("%5ld  DEFICIENT\n",n);continue;}
 
m=n/2;
c=0;
for(i=2;i<=m;i++)
if(n%i==0){
 a[c]=i;
 a[c+1]=n/i;
 c++; }

sum=0;

for(i=0;i<c;i++)
 sum=sum+a[i];
 sum=sum+1;
 if(sum==n) {printf("%5ld  PERFECT\n",n);  }
 if(sum<n) {printf("%5ld  DEFICIENT\n",n); }
 if(sum>n) {printf("%5ld  ABUNDANT\n",n); }
}
  return 0;
 }