#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;

int i,l,cas,n,p,m;
char a[100],b[100];

int main(){
    
    scanf("%d",&cas);
    
    for(l=0;l<cas;l++){
                       
     map<string,int>mp;
     
     scanf("%d",&n);
     
     for(i=1;i<=n;i++){
      scanf("%s %d",a,&m);
      mp[a]=m; }
      
      scanf("%d %s",&p,b);
     
      if(mp[b]<=p&&mp[b]!=0)
       printf("Case %d: Yesss\n",l+1);
      else if(mp[b]>p&&mp[b]<=p+5&&mp[b]!=0)
       printf("Case %d: Late\n",l+1);
      else
       printf("Case %d: Do your own homework!\n",l+1);
        
}

return 0;
}   
      
      
