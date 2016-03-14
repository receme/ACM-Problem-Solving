#include<stdio.h>

int main(){

int i,j,k,a,b,c,n,m,count;


scanf("%d",&n);


for(m=0;m<n;m++){

   scanf("%d %d %d",&a,&b,&c);
    count=0;
    k=a+b;

    while(k>=c){

     j=k/c;
     k=k%c;
     k=k+j;
     count=count+j;
     }

     printf("%d\n",count);
     
  }

  return 0;
  }

