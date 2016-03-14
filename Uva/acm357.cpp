#include <stdio.h>
#define MAXTOTAL 30000
long long nway[MAXTOTAL+1];
int main(){

int coin[5] = { 50,25,10,5,1 };
int i,j,n,v,c;
while(scanf("%d",&n)!=EOF){
          
v = 5;
nway[0] = 1;
for(i=1;i<=30000;i++)
 nway[i]=0;
for (i=0; i<v; i++) {
c = coin[i];
for (j=c; j<=n; j++)
nway[j] += nway[j-c];
}
if(nway[n]==1)
 printf("There is only 1 way to produce %d cents change.\n",n);
else{
     printf("There are %lld ways to produce ",nway[n]);
     printf("%d cents change.\n",n);
   } 


}
return 0;
}
