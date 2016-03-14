#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<map>
using namespace std;

char a[1000],b[1000];
int i,j,n;
map<string,int>mp;

int main(){
    
    while(gets(b)){
    
        n=strlen(b);                    
    j=0;
    for(i=0;i<n;i++){
      if((b[i]>=65&&b[i]<=90)||(b[i]>=97&&b[i]<=122)){
      a[j]=tolower(b[i]);
      j++; }
      else{
      if(j!=0){
      
      if(mp[a]!=1)
       mp[a]=1;
      memset(a,0,1000); 
      j=0;
}
      }     
  }  
  if(j!=0){
  if(mp[a]!=1)
       mp[a]=1;
      memset(a,0,1000); }
   
  memset(b,0,1000);
  
 
  
}   
   for( map<string,int>::iterator ii=mp.begin(); ii!=mp.end(); ++ii)
   {  
       cout <<(*ii).first<<endl ; 
       
   }
  
 return 0;
}  
