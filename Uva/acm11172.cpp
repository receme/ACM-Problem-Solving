#include<stdio.h>

int main(){

int n,i;
long a,b;

scanf("%d",&n);

for(i=0;i<n;i++) {

  scanf("%ld %ld",&a,&b);

  if(a>b)
   printf(">\n");
  if(a<b)
   printf("<\n");
  if(a==b)
   printf("=\n");

 }

 return 0;
 }