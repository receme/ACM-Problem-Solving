#include<stdio.h>

long long cas,i,k,l,m,sum;


int main(){
    
    
    scanf("%lld",&cas);
    

for(l=0;l<cas;l++){

 scanf("%lld",&m);
 
 k=m-2;

    sum=1;
    for(i=1;i<=k;i++)
    {
       sum=(sum*m) % 2000000011;
    }
 
 printf("Case #%lld: %lld\n",l+1,sum);
 
}

return 0;
}  
