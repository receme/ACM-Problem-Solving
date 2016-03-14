
#include<stdio.h>
#include<math.h>

unsigned long i,j,k,n,m,h,t;
unsigned long fib(unsigned long n);
int main(){
    while(scanf("%lu %lu",&n,&m)!=EOF){
    n=fib(n);
printf("%lu\n",n);
m=pow(2,m);
i=n%m;
 printf("%lu\n",i);
    }
 return 0;
}

unsigned long fib(unsigned long n) {
i = h = 1;
j = k = 0;
while (n > 0) {
if (n%2 == 1) { // if n is odd
t = j*h;
j = i*h + j*k + t;
i = i*k + t;
}
t = h*h;
h = 2*k*h + t;
k = k*k + t;
n = (unsigned long) n/2;
} return j;}
