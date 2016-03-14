#include<stdio.h>
#include <iostream>
#include <queue>
using namespace std;

int r,s,i,j,k,n,cas,l,N,m,G[10000][10000],co,v[100000],flag,b[10000][10000];
char a[100000];

queue<int> q;

void BFS(int start_v,int n)
	{
	   v[start_v]=1;
       
	     for(int i = 0; i < n; i++)	     {
	         if(G[start_v][i] == 1 && v[i] == 0)
	         {  q.push(i);
                v[i] = 1;
	         }
     }
	     while(!q.empty())
	     {
	         int tmp = q.front();
	         q.pop();
	         BFS(tmp,n);
             	     }
	}
	
	

int main(){
    
   
l=1;    
while(scanf("%d",&m)==1){    
// if(m==0&&n==0) break;               

flag=0;
r=0;
for(i=0;i<m;i++){
 scanf("%s",a);
 for(j=0;j<m;j++){
  if(a[j]=='0')
   b[i][j]=3000;
 else if(a[j]=='1'){
   b[i][j]=r;
   r++;
   flag=1;
   }
  
}
}

if(flag==0){
 printf("Image number %d contains 0 war eagles.\n",l);
 l++;
 continue; }

N=r;


for(i=0;i<N;i++)
 for(j=i;j<N;j++)
  G[i][j]=G[j][i]=0;
  

for(i=0;i<m;i++)
 for(j=0;j<m;j++)
  if(b[i][j]>=0&&b[i][j]<N){
                        
     if(i+1<m)
      if(b[i+1][j]!=0)
        G[b[i][j]][b[i+1][j]]=G[b[i+1][j]][b[i][j]]=1;
       
        
        
     if(i+1<m&&j+1<m) 
      if(b[i+1][j+1]!=0)
        G[b[i][j]][b[i+1][j+1]]=G[b[i+1][j+1]][b[i][j]]=1;
         
                               
     
     if(j+1<m) 
      if(b[i][j+1]!=0)
        G[b[i][j]][b[i][j+1]]=G[b[i][j+1]][b[i][j]]=1; 

      if(i-1>=0&&j+1<m) 
      if(b[i-1][j+1]!=0)
        G[b[i][j]][b[i-1][j+1]]=G[b[i-1][j+1]][b[i][j]]=1;
       
      if(i-1>=0) 
      if(b[i-1][j]!=0)
        G[b[i][j]][b[i-1][j]]=G[b[i-1][j]][b[i][j]]=1;  
  
      if(i-1>=0&&j-1>=0) 
      if(b[i-1][j-1]!=0)
        G[b[i][j]][b[i-1][j-1]]=G[b[i-1][j-1]][b[i][j]]=1;
        
      if(j-1>=0) 
      if(b[i][j-1]!=0)
        G[b[i][j]][b[i][j-1]]=G[b[i][j-1]][b[i][j]]=1;  
        
      if(i+1<m&&j-1>=0)
       if(b[i+1][j-1]!=0)
        G[b[i][j]][b[i+1][j-1]]=G[b[i+1][j-1]][b[i][j]]=1;  
}   
  
 
 
 

 
for(i=0;i<N;i++)
  v[i]=0;

 co=0;
 
 j=0;
 for(;;){
                      
   BFS(j,N);
   co++;
   flag=0;
  for(i=0;i<N;i++)
   if(v[i]==0){
    flag=1;
    break; } 

   if(flag==1)
    j=i;
   else 
    break; 
}     
 
 printf("Image number %d contains %d war eagles.\n",l,co);
 l++;

 
  
}


}                      
    
