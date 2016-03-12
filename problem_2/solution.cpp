#include<stdio.h>
#include<string.h>

int main(){
  char a[1000];
 int i,n;
while(gets(a)){
 n=strlen(a);
 for(i=0;i<n;i++)
  a[i]=a[i]-7;
 puts(a);

 }
 return 0;
 }