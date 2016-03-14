#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
long a[510],i,j,k,sum,flag,m,less,d,n,l,c;

scanf("%ld",&c);

for(l=0;l<c;l++){
X:
scanf("%ld",&n);
if(n<1||n>=500)
 goto X;

for(i=0;i<n;i++)
 scanf("%ld",&a[i]);

sort(a,a+n);
   less=1000000000;
   for(i=1;i<30000;i++){
    sum=0;
   for(j=0;j<n;j++){
       d=i-a[j];
    if(d<0) d=-d;
     sum=sum+d;
    }

     if(sum<=less){
      less=sum;
       }
     else
      break;

    }

    printf("%ld\n",less); }

    return 0;  }
