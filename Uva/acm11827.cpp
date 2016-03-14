#include<stdio.h>
#include <sstream>
using namespace std;

char a[1000];
long b[101],num,i,j,k,m,n,ma,cas,l;

long GCD(long x,long y) {
while (y > 0) {
x = x % y;
x ^= y; y ^= x; x ^= y; } return x;
}

int main(){
    
    scanf("%ld",&cas);
    getchar();
    for(l=0;l<cas;l++){
    gets(a);
      
      stringstream ss(a);
      i=0;
      while(ss>>num){
       b[i]=num;
       i++; }
       
      if(i==0||i==1){
       printf("0\n");
       continue; }
      ma=0; 
      for(j=0;j<i-1;j++)
       for(k=j+1;k<i;k++){
         m=GCD(b[j],b[k]);
         if(m>ma) ma=m;
         }
     printf("%ld\n",ma);
     
}

return 0;
}    
        

