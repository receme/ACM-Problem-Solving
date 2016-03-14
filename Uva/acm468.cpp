#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;

int i,j,k,l,m,n,cas;
char a[10000],b[10000];

struct data{
 char ch;
 int co;
}s[10000],p[10000],t;

int main(){
    
    scanf("%d",&cas);


for(l=0;l<cas;l++){
 
  scanf("%s",a);
  
  n=strlen(a);
  map<char,int>mp;
  for(i=0;i<n;i++)
    mp[a[i]]++;
   
  j=0;  
  for(map<char,int>::iterator ii=mp.begin();ii!=mp.end();++ii){
      s[j].ch=(*ii).first;
      s[j].co=(*ii).second;
      j++;
      }
      
    for(i=0;i<j;i++)
     for(k=0;k<j-1;k++)
      if(s[k].co<s[k+1].co){
       t=s[k];
       s[k]=s[k+1];
       s[k+1]=t; } 
       
     
      
      scanf("%s",a);
  
  n=strlen(a);
  mp.clear();
  for(i=0;i<n;i++)
    mp[a[i]]++;
   
  j=0;  
  for(map<char,int>::iterator ii=mp.begin();ii!=mp.end();++ii){
      p[j].ch=(*ii).first;
      p[j].co=(*ii).second;
      j++;
      }
      
    for(i=0;i<j;i++)
     for(k=0;k<j-1;k++)
      if(p[k].co<p[k+1].co){
       t=p[k];
       p[k]=p[k+1];
       p[k+1]=t; }  
       
       
    map<char,char>mp1;
    
    for(i=0;i<j;i++)
     mp1[p[i].ch]=s[i].ch;   
    
   if(l!=0)
    printf("\n"); 
     
   for(i=0;i<n;i++)
    printf("%c",mp1[a[i]]);
    
    printf("\n"); 
     
      
}

return 0;
}
   
        
