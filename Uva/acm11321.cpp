#include<stdio.h>
#include<algorithm>
using namespace std;

int i,N,M,s[10001];
  
  
 bool myfunc(int i,int j){
     int m1=i%M;
     int m2=j%M;
     if(m1<m2)return true;
     
     else if(m2<m1) return false;
     
     else if(m1==m2){
         if(i%2==0&&j%2!=0)
          return false; 
         else if(i%2!=0&&j%2==0)
          return true; 
         else if(i%2!=0&&j%2!=0){
          if(i>j)
           return true; 
          else
           return false; }
         else if(i%2==0&&j%2==0){
          if(i<j)
           return true; 
          else 
           return false; 
           } 
         
         } 
     }
          
       


int main(){
    
    while(scanf("%d %d",&N,&M)==2){
        
        if(M==0&&N==0){
        printf("%d %d\n",N,M);
         break; }
        i=0;
        while(i<N){
         scanf("%d",&s[i]);
         i++; }
                    
       
         
         sort(s,s+N,myfunc);
         printf("%d %d\n",N,M);
         
         i=0;
         while(i<N){
         printf("%d\n",s[i]);
         i++; }
          
         
        
         
}
return 0;
}        
         
