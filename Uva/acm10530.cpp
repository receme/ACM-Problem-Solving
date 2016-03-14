#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;
int i,n;
char a[6];

int main(){
    
    while(scanf("%d",&n)==1){
      if(n==0) break;
          
      map<int,int>mp;      
      while(scanf("%s %s",a,a)==2){
       
      
      if(strcmp(a,"high")==0)
        for(i=n;i<=10;i++)
         mp[i]=1;
        
        
      else if(strcmp(a,"low")==0)
         for(i=n;i>=1;i--)
          mp[i]=1;
      else if(strcmp(a,"on")==0){
         
        if(mp[n]==0)
         printf("Stan may be honest\n");
        else
         printf("Stan is dishonest\n");
         
        break;
       } 
       
     scanf("%d",&n);      
           
       
      }
      
}

return 0;
}
