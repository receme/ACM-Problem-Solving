#include<stdio.h>

int main(){

int n,a,b;
scanf("%d",&n);

for(int i=0;i<n;i++){
 scanf("%d",&a);
 scanf("%d",&b);

 int sum=0;
 if(a%2==0)
   a=a+1;
 for(int j=a;j<=b;j=j+2)
   sum=sum+j;

 printf("Case %d: %d\n",i+1,sum);
 }

 return 0; }



   


