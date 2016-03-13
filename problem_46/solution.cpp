
#include<stdio.h>


int main(){
    long i,j,k;
    long bigmod(  long b,long p,long m);
    long square( long a);
while(scanf("%ld %ld %ld",&i,&j,&k)==3){


    i=bigmod(i,j,k);
    printf("%ld\n",i);
}

return 0;
}
long square(long i){

return i*i;
}


 long bigmod( long b,long p,long m) {
if (p == 0)
return 1;
else if (p%2 == 0)
return square(bigmod(b,p/2,m)) % m;
else
return ((b % m) * bigmod(b,p-1,m)) % m;
}
