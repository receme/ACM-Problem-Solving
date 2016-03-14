#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;

long i,j,k,m,n,a[100000],b[100000],l,p;

int main(){
    
    while(scanf("%ld %ld",&m,&n)==2){
        
       if(m==0&&n==0)
        break; 
       map<long,int>mp1,mp2;
       j=0;
       for(i=0;i<m;i++){
         scanf("%ld",&k);
         if(mp1[k]==0){
          a[j]=k;
          j++;            
          mp1[k]=1; }
          }
          
         p=0; 
       for(i=0;i<n;i++){
         scanf("%ld",&k);
         if(mp2[k]==0){
          b[p]=k;
          p++;
          mp2[k]=1;}
          }
          
         
       if(j<p){
        k=j;
        l=k;
         for(i=0;i<k;i++){
         if(mp1[a[i]]==1&&mp2[a[i]]==1)
          l--;
          }    
          }
       else{
        k=p;
        l=k;     
       for(i=0;i<k;i++){
         if(mp1[b[i]]==1&&mp2[b[i]]==1)
          l--;
          }    
    }
       
       
       printf("%ld\n",l);
       
       }
  return 0;
  
}   
          
               
