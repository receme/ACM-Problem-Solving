#include<stdio.h>
#include<map>
using namespace std;

long N,i,p,a,b;

int main(){
    
    while(scanf("%ld",&N)==1){
      if(N==0) break;
      map<int,int>mp,mp1;
      
      for(i=0;i<N;i++){
       scanf("%ld %ld",&a,&b);
       if(a<b)
        mp[a]=b;
       else
        mp1[a]=b;  }
      
      if(N%2!=0){
       printf("NO\n");
       continue; }  
      
      map<int,int>::iterator ii;
      p=0;
      for( ii=mp.begin(); ii!=mp.end(); ++ii)
       {   
           if(mp1[(*ii).second]!=(*ii).first)
            p=1;
            break; }
           
      if(p==0)
       printf("YES\n");
      else 
       printf("NO\n");         
}

return 0;
}    
      
     
