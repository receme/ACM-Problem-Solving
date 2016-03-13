#include<stdio.h>
#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

int r,s,i,j,k,n,cas,l,N,G[10000][10000],co,v[10000],flag;
char ch[2],b[10];
queue<int> q;

void BFS(int start_v, int n)
  {
     v[start_v]=1;
       
       for(int i = 0; i < n; i++)      {
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
    
    scanf("%d",&cas);
    
 for(l=0;l<cas;l++){
   
   if(l!=0) printf("\n");                 
  scanf("%s",ch);
  getchar();
  N=ch[0]-64;
 

for(i=0;i<N;i++)
for(j=i;j<N;j++)
    G[i][j]=G[j][i]=0;

while(gets(b)){
 
 
 if(b[0]==0) break;
  r=b[0]-65;
  s=b[1]-65;

  G[r][s]=1;
  G[s][r]=1; 
}

for(i=0;i<N;i++){
 for(j=0;j<N;j++)
  printf("%d ",G[i][j]);
  printf("\n"); }
printf("\n");  

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
 
 printf("%d\n",co);
 
}


}                      
    
