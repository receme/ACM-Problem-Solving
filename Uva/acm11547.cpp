#include<stdio.h>

int main(){

    long i,j,k,n,m,t;

    scanf("%ld",&t);

    for(i=0;i<t;i++){
        scanf("%ld",&n);

      j=(((((n*567)/9)+7492)*235)/47)-498;

      j=j/10;
      j=j%10;
      if(j<0)
      j=-j;
      printf("%ld\n",j);
    }

    return 0;
}
