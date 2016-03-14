
#include<stdio.h>



    long g,i,j,n;
    long GCD(long i,long j);
int main(){
    while(scanf("%ld",&n)==1){
        if(n==0) break;

      g=0;

      for(i=1;i<n;i++)
       for(j=i+1;j<=n;j++)
        g+=GCD(i,j);


     printf("%ld\n",g);

    }

    return 0;
}

long GCD(long i,long j){
    while (j > 0) {
i =i % j;
i ^= j; j ^= i; i ^= j; } return i;
}
