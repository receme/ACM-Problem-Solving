
#include<stdio.h>

int main(){

    long a[20]={561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745,63973};
    long i,j,k,n;

    while(scanf("%ld",&n)==1){
        if(n==0)break;
        if(n<=2||n>=65000) continue;

        k=0;
        for(i=0;i<15;i++)
         if(n==a[i]){
          printf("The number %ld is a Carmichael number.\n",n);
          k=1;
          break; }

      if(k==0)
       printf("%ld is normal.\n",n);

    }

    return 0;
}


