#include<iostream>
#include<map>
using namespace std;


char a[100];
long i,m,n,l,cas,t;
double res;

int main(){
    scanf("%ld\n\n",&cas);
    
 for(l=0;l<cas;l++){
  t=0;
  map<string,long>mp;
 
  if(l!=0) printf("\n");
  while(gets(a)){
    
    if(a[0]==NULL)
     break;
    t++; 
   mp[a]++; 
  
}

   for( map<string, long>::iterator ii=mp.begin(); ii!=mp.end(); ++ii)
   {   n=(*ii).second;
       res=(double)((n*100.0)/t);
      cout << (*ii).first << " "; 
       printf("%.4lf\n",res);  
   }


}

return 0;
} 
    
