#include <stdio.h>

long nway[8000];
int main(){

int coin[5] = { 50,25,10,5,1 };
int i,j,n,k,c;


nway[0]=1;
for (i=0; i<5; i++) {
c = coin[i];

for (j=c; j<=k; j++)
nway[j] += nway[j-c];
}

                  

while(scanf("%d",&n)==1){
   printf("%ld\n",nway[n]);  }
return 0;
}
