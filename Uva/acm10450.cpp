
#include<stdio.h>

 unsigned long i,j,n,m,h,t,k,l;

 int main(){


    unsigned long fib(unsigned long n);

    scanf("%lu",&n);

    for(l=0;l<n;l++){

      scanf("%lu",&m);

      if(m>53){
          printf("Scenario #%lu:\n\n\n",l+1);
          continue; }

      if(m==0){
          printf("Scenario #%lu:\n1\n\n",l+1);
          continue; }

      m=m+2;

      j=fib(m);

      printf("Scenario #%lu:\n%lu\n\n",l+1,j);



    }

    return 0;
}


 unsigned long fib(unsigned long n) {
i = h = 1;
j = k = 0;
while (n > 0) {
if (n%2 == 1) {
t = j*h;
j = i*h + j*k + t;
i = i*k + t;
}
t = h*h;
h = 2*k*h + t;
k = k*k + t;
n = (int) n/2;
} return j;}
