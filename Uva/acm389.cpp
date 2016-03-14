#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

char a[1000000];
char d[10];
long i,j,k,l,n,b,c;
long m,sum;

long decimal(char a[],int b){
 n=strlen(a);
  sum=0;
  k=0;

  for(i=n-1;i>=0;i--){
    if(a[i]>=48&&a[i]<=57)
     sum=sum+(long)(a[i]-48)*(long)pow(b,k);
    else
     sum=sum+(long)(a[i]-55)*(long)pow(b,k);

   k++;
  }

  return sum;
}



int main(){

  while(scanf("%s %ld %ld",a,&b,&c)==3){

       if(b==10){
        m=0;k=1;
        n=strlen(a);
        for(i=n-1;i>=0;i--){
         m=m+(long)(a[i]-48)*k;
         k=k*10;
         }
       }
       else
        m=decimal(a,b);

      memset(d,0,10);

      if(m==0){
        printf("%7d\n",m);
        continue; }

      k=0;
      while(m!=0){
      n=m%c;
      if(n<10)
       d[k]=n+48;
      else
       d[k]=n+55;
      m=m/c;
      k++;
      if(k>7) break;
      }

      if(k>7)
       printf("  ERROR\n");
      else{
       reverse(d,d+k);
       printf("%7s\n",d);


       }


      }

  return 0;
}




