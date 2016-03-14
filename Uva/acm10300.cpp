#include<stdio.h>

int main(){

long i,j,k,n1,n2,sum,a[100];

scanf("%ld",&n1);

for(i=0;i<n1;i++){

scanf("%ld",&n2);
  sum=0;
for(j=0;j<n2;j++){
 for(k=0;k<3;k++)
   scanf("%ld",&a[k]);
   sum=sum+a[0]*a[2];
  }

 printf("%ld\n",sum);

 }
 return 0;
 }