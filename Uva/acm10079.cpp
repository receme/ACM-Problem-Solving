
#include<stdio.h>
long long j,n;

int main(){


    while(scanf("%lld",&n)==1){
        if(n<0) break;


       j=1+ (n*(n+1))/2;

       printf("%lld\n",j);
    }

    return 0;
}
