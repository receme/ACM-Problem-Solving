#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXSIEVE 100000000 // All prime numbers up to this
#define MAXSIEVEHALF (MAXSIEVE/2)
#define MAXSQRT 5000 // sqrt(MAXSIEVE)/2
char a[MAXSIEVE/16+2];
#define isprime(n) (a[(n)>>4]&(1<<(((n)>>1)&7))) // Works when n is odd

void init() {
int i,j;
memset(a,255,sizeof(a));
a[0]=0xFE;
for(i=1;i<MAXSQRT;i++) {
if (a[i>>3]&(1<<(i&7))) {
for(j=i+i+i+1;j<MAXSIEVEHALF;j+=i+i+1) {
a[j>>3]&=~(1<<(j&7));
}
}
}
}

int main() {
init();
long long n;
while (scanf("%lld", &n) == 1) {
if (n < 5) {
printf("%lld is not the sum of two primes!\n", n);
continue;
}
if (n & 1) {
if (isprime(n-2)) {

printf("%lld is the sum of 2 and %lld.\n", n, n-2);
continue;
} else {
printf("%lld is not the sum of two primes!\n", n);
continue;
}
} else {
bool ok = false;
int len;
if((n/2)%2==0)
len=n/2+1;
else
len=n/2;
for (long long i=len; i>=3; i-=2) {
if (isprime(i) && isprime(n-i)&&i!=n-i) {
if(i<n-i)
printf("%lld is the sum of %lld and %lld.\n", n, i, n-i);
else
printf("%lld is the sum of %lld and %lld.\n", n,n-i, i);
ok = true;
break;
}
}
if (!ok) {
printf("%lld is not the sum of two primes!\n", n);
}
}
}
return 0;
}
