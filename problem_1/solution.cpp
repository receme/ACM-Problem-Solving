#include<stdio.h>

int main(){
long a,b,n,max,k,temp,c=0;
while(scanf("%ld %ld",&a,&b)==2) {
if(a==0||b==0) continue;
if(a>b)
 {  temp=a;
    a=b;
    b=temp;
    c=1;}
 max=0;
 for(int i=a;i<=b;i++){
 k=1;  n=i;
 while(n!=1){
  if(n%2!=0)
   n=3*n+1;
  else
   n=n/2;
  k++; }
 if(k>max) max=k;}
 if(c==1) {printf("%ld %ld %ld\n",b,a,max); c=0;}
else  printf("%ld %ld %ld\n",a,b,max);

 }
return 0; }