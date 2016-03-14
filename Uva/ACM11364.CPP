#include<stdio.h>
int main(){
int i,j,k,a[102],sum;
scanf("%d",&a[101]);
for(i=0;i<a[101];i++){
 scanf("%d",&a[100]);
  for(j=0;j<a[100];j++)
   scanf("%d",&a[j]);
 for(j=0;j<a[100];j++)
  for(k=0;k<a[100]-1;k++)
   if(a[k]>a[k+1]){
    sum=a[k];
    a[k]=a[k+1];
    a[k+1]=sum;}
  sum=0;
  for(j=1;j<a[100];j++)
   sum=sum+(a[j]-a[j-1]);
   printf("%d\n",(sum*2));
 
 }

 return 0; }