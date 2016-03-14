#include<stdio.h>
int main(){

int a[100],n,p;
long i;
while(scanf("%ld",&i)!=EOF){
if(i==0)break;

n=1;p=0;
while(i!=0){
 a[n]=i%2;
 if(a[n]==1)
  p++;
 i=i/2;
 n++;
 }
 
printf("The parity of ");

for(i=n-1;i>=1;i--)
  printf("%d",a[i]);

printf(" is %d (mod 2).\n",p);

 }
 return 0;
 }
