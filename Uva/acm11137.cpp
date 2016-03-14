#include <stdio.h>
#define MAXTOTAL 10000
long long nway[MAXTOTAL+1];
long coin[21] = { 1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
long i,j,n,c;
int main()
{

                       
nway[0] = 1;
for (i=0; i<21; i++) {
c = coin[i];
for (j=c; j<=10000; j++)
nway[j] += nway[j-c];
}
while(scanf("%ld",&n)==1){

printf("%lld\n",nway[n]);
}

return 0;

}
