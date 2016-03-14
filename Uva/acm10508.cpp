#include<iostream>
#include<string.h>
#include<map>
using namespace std;

char a[2001],b[2001],c[2001];
int i,j,k,m,n;

int main(){
    
    while(scanf("%d %d",&m,&n)==2){
      scanf("%s",a);
      map<int,string>mp;
      for(i=0;i<m-1;i++){
        scanf("%s",b);
        
        k=0;
        for(j=0;j<n;j++)
         if(a[j]!=b[j])
          k++;
        mp[k]=b;
      }
      
   printf("%s\n",a);
   
   for( map<int,string>::iterator ii=mp.begin(); ii!=mp.end(); ++ii)
   {  
       cout <<(*ii).second<<endl ; 
       
   }   
      
}

return 0;
}     
                         
       
