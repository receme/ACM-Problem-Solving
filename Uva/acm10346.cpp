
#include<stdio.h>

int main(){

    long k,n,total,butt;

    while(scanf("%ld %ld",&n,&k)!=EOF){
        total=0; butt=0;

        while(n>0){
            total+=n;
            butt+=n;
            n=butt/k;
            butt%=k;
        }

        printf("%ld\n",total);

    }
    return 0;
}



