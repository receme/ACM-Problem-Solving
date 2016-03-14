#include<stdio.h>

int main(){

long step,l,c,i,sum,j,k,n,m,a[100];


scanf("%ld",&c);

for(l=0;l<c;l++){
scanf("%ld",&n);
m=n;
step=0;
for(;;){

i=0;
while(n!=0) {
a[i]=n%10;
n=n/10;
i++; }
k=1; sum=0;

for(j=i-1;j>=0;j--){
 sum=sum+a[j]*k;
 k=k*10;          }

step++;
if(sum==m){
 printf("%ld %ld\n",step-1,sum);
 break;  }
else {
 m=m+sum;
 n=m;}
}

}
return 0;

 }
