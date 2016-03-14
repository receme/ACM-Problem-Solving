#include<stdio.h>

long long k,m,n;

int main(){
    
    while(scanf("%lld %lld",&m,&n)==2){
      k=0;
      for(;;){
       k=k+m;
      if(k>=n)
       break;
      m++;
      }
      
      printf("%lld\n",m);
      
      }
 return 0;
}         
              
