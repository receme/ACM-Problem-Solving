#include<stdio.h>

int main(){

long s,x,y,i,j,k,m,n,less,count,l;
long a[100000],b[100000];

while(scanf("%ld",&n)!=EOF){
    if(n<2||n>10000)continue;


for(i=0;i<n;i++)
 scanf("%ld",&a[i]);

scanf("%ld",&m);

for(i=0;i<n;i++)
 for(j=0;j<n-1;j++)
  if(a[j]>a[j+1]){
  k=a[j];
  a[j]=a[j+1];
  a[j+1]=k;  }

 less=10000000; j=0;   count=0;
for(i=0;i<n-1;i++)
 for(l=i+1;l<n;l++){
  if(a[i]+a[l]==m){
   count++;
   b[j]=a[i];
   b[j+1]=a[l];
   j=j+2; }

  }

if(count>1){
  for(k=0;k<j-1;k=k+2){
   s=b[k]-b[k+1];
   if(s<0)s=-s;

   if(s<less){
    less=s;
    x=b[k];
    y=b[k+1]; }

   }}


if(count>1)
 printf("Peter should buy books whose prices are %ld and %ld.\n\n",x,y);
else
 printf("Peter should buy books whose prices are %ld and %ld.\n\n",b[0],b[1]);


 }
 return 0;
 }