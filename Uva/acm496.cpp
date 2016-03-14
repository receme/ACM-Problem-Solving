#include<stdio.h>
#include<sstream>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;
int i,j,k,m,n,a[1000],b[1000],num,flag;
char ar[1000],br[1000];

int main(){
    
    while(gets(ar)){
     map<int,int>mp,mp1;
     stringstream ss(ar);
      j=0;
      while(ss>>num){
       if(mp[num]==0){
        a[j]=num;
        j++; }
       mp[num]=1;
        }
       
    gets(br);
     flag=0;
     stringstream ss1(br);
      k=0;
      while(ss1>>num){
       if(mp1[num]==0){
       b[k]=num;
       k++; 
       if(mp[num]==1)
        flag=1; }
       mp1[num]=1; 
        }
       
      
       
     if(flag==0){
      printf("A and B are disjoint\n");
      continue; }
      
      
    if(j==k){
     flag=0;
     sort(a,a+j);
     sort(b,b+k);
     for(i=0;i<j;i++)
       if(a[i]!=b[i]){
        flag=1;
        break; }
       
      if(flag==0){
       printf("A equals B\n");
        continue; }
        } 
        
      if(j>=k){
      int co=0,co1=0;   
      for(i=0;i<k;i++)   
         if(mp[b[i]]==1) {
          co=1;
          break; }
          
      for(i=0;i<k;i++)   
         if(mp[b[i]]==0) {
          co1=1;
          break; }
      //printf("%d %d\n",co,co1);    
     if(co==1&&co1==1){
      printf("I'm confused!\n");
      continue; }   
      } 
     if(k>j){ 
      int co=0,co1=0;   
      for(i=0;i<j;i++)   
         if(mp1[a[i]]==1) {
          co=1;
          break; }
          
      for(i=0;i<j;i++)   
         if(mp1[a[i]]==0) {
          co1=1;
          break; }
      // printf("%d %d\n",co,co1);        
     if(co==1&&co1==1){
      printf("I'm confused!\n");
      continue; }   
      }
      
      
    if(j>k)
     printf("B is a proper subset of A\n");
    else
     printf("A is a proper subset of B\n");
   
}

return 0;
}  
        
     
     
         
        
       
           
