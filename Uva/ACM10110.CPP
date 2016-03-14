#include<stdio.h>
#include<math.h>

int main(){

long i,k,j,n,m;
while((scanf("%ld",&n))==1){
if(n==0)break;
if(n<1000000){
i=1;k=0;j=3;
for(;i<=n;){

  if(n==i){
   printf("yes\n");
   k=1;
   break;}

  i=i+j;
  j=j+2;
}

  if(k==0)printf("no\n");

}




}


return 0;
}


