#include<stdio.h>
#include<map>
using namespace std;

long k,n,Z,I,M,L,cas=1;

int main(){
    
    while(scanf("%ld %ld %ld %ld",&Z,&I,&M,&L)==4){
    
      if(Z==0&&I==0&&M==0&&L==0)
       break;
       
      map<long,int>mp;
      k=0;
      for(;;){
      
       n=Z*L+I;
       L=n%M;
      
       if(mp[L]==1)
        break;
       else
        mp[L]=1;
         k++;
       }
       
     printf("Case %ld: %ld\n",cas,k);
     cas++;
}

return 0;
}   
      
       
