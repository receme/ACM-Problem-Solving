#include<iostream>
#include<map>
using namespace std;

char a[1000],b[1000];
int i,j,n,flag;
map<string,int>mp;

int main(){
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);   
    j=0; 
    
    while(gets(b)){
    
        n=strlen(b);                    
      
    flag=0; 
    for(i=0;i<n;i++){
      if(i==n-1&&b[i]=='-'){
       flag=1;break;}               
      
      if((b[i]>=65&&b[i]<=90)||(b[i]>=97&&b[i]<=122)||(b[i]=='-'&&i!=n-1)){
      a[j]=tolower(b[i]);
      j++; }
      else
      if(j!=0){
                     
      if(mp[a]!=1)
       mp[a]=1;
      memset(a,0,1000); 
      if(i!=n-1)
      j=0;
      }
  }     
  
  if(j!=0&&flag==0){
                  
  if(mp[a]!=1)
       mp[a]=1;
      memset(a,0,1000);
      j=0; }
   
  memset(b,0,1000);
  
 
}


if(j!=0){
  if(mp[a]!=1)
       mp[a]=1;
      memset(a,0,1000); }
   
memset(b,0,1000);
   i=0;
for( map<string,int>::iterator ii=mp.begin(); ii!=mp.end(); ++ii)
{  
     if(i==0) {i=1;continue;}
     cout <<(*ii).first<<endl ;
}
  
 return 0;

}  
