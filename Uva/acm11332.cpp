#include<stdio.h>
#include<string.h>

int main(){

char a[1000];

int i,j,k,n,b[1000],sum;

while(scanf("%s",a)){
if(a[0]=='0')break;

n=strlen(a);

for(i=0;i<n;i++)
 b[i]=a[i]-48;

 
 for(;;){
 sum=0;j=0;
 while(j<i){
 sum=sum+b[j];
 j++; }

 if(sum<10){
  printf("%d\n",sum);
  break; }

 else {
   i=0;
  while(sum!=0){
   b[i]=sum%10;
   sum=sum/10;
   i++;}  }

   }}
 return 0;}