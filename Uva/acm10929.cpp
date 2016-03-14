#include<stdio.h>
#include<string.h>

int main(){

char a[1001];
int i,n,sum1,sum2,b[1001];

while(gets(a)){
n=strlen(a);
for(i=0;i<n;i++)
 b[i]=a[i]-48;

sum1=0;
for(i=n-1;i>=0;){
 sum1=sum1+b[i];
 i=i-2; }
if(sum1==0)break;
 sum2=0;
for(i=n-2;i>=0;){
 sum2=sum2+b[i];
 i=i-2; }
               
 if(sum1>sum2)
  sum1=sum1-sum2;
 else
  sum1=sum2-sum1;

 if(sum1==0)
  printf("%s is a multiple of 11.\n",a);
 else{
  if(sum1%11==0)
    printf("%s is a multiple of 11.\n",a);
  else
    printf("%s is not a multiple of 11.\n",a);
 }
}
 return 0;
 }
 

