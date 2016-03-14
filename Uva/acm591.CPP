#include<stdio.h>

int main(){

int a[100],i,sum,k,n,m,sum1;
m=1;
while((scanf("%d",&n))==1){

  if(n==0)break;
sum=0;
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 sum=sum+a[i];}

sum=sum/n;

 sum1=0;
for(i=0;i<n;i++){
 a[i]=a[i]-sum;
 if(a[i]<0) a[i]=(-a[i]);
 sum1=sum1+a[i]; }



 k=sum1/2;
 printf("Set #%d\n",m);
 printf("The minimum number of moves is %d.\n\n",k);
 m++; }
 return 0;
 }
 
