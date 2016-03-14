#include<stdio.h>
#include<algorithm>
using namespace std;
long GCD(long a,long b) {
while (b > 0) {
a = a % b;
a ^= b; b ^= a; a ^= b; } return a;
}

long a[1001],b[1001],gcd,n,i,j,g;


int main(){
  
while(scanf("%ld",&n)==1){
  if(n==0) break;
  
  a[0]=n;
i=1;
 while(scanf("%ld",&n)==1){
    if(n==0) break;
    a[i]=n;
     i++;
 }  
 
 sort(a,a+i);
                      
 n=a[0];
 
 for(j=1;j<i;j++)
  b[j-1]=a[j]-n;
 n=i-1;                               
  if(n==1){
   printf("%ld\n",b[0]);
   continue; }
  
  g=GCD(b[0],b[1]);
  
  for(i=2;i<n;i++)
    g=GCD(g,b[i]);
    
 printf("%ld\n",g);
 
}

return 0;
}                  
