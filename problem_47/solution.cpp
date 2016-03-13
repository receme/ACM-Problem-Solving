#include<stdio.h>

int main(){

long carry,i,j,c[100],d[100],a,b,sum;


while(scanf("%ld %ld",&a,&b)==2){

  if(a==0&&b==0)
   break;

i=0;
while(a!=0){
 c[i]=a%10;
 a=a/10;
 i++; }

j=0;
while(b!=0){
 d[j]=b%10;
 b=b/10;
 j++; }

if(j>i){
 a=j;
 for(b=i;b<=j;b++)
  c[b]=0;}
else{
 a=i;
 for(b=j;b<=i;b++)
  d[b]=0;}



 carry=0;b=0;
 for(i=0;i<a;i++){
   sum=c[i]+d[i];
    if(sum>=10){
     carry++; b=1;
     d[i+1]=d[i+1]+1 ; }


 }

 if(b==1){
  if(carry>1)
   printf("%ld carry operations.\n",carry);
  else
   printf("%ld carry operation.\n",carry); }
 else
  printf("No carry operation.\n");

 }
 return 0;}
