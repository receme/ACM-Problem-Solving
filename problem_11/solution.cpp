#include<stdio.h>
int Coin[] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
unsigned long long n; double dd;
unsigned long long nway[40000];
int main() {

unsigned long long i, j, c;
nway[0] = 1;
for(i = 0; i<11; i++) {
c = Coin[i];
for(j = c; j<=30000; j++) {
nway[j] += nway[j-c];
}
}

while(scanf("%lf",&dd) ==1) {
if(dd==0.00)
break;
n=dd*20;

printf("%6.2lf%17llu\n",dd,nway[n]);
}
return 0;
} 