#include<stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int p,z,r,s,i,j,k,n,cas,l,N,m,G[10000][10000],co,v[100000],flag,b[10000][10000];
char a[1000][1000];

queue<int> q;
struct data{
  char ch;
  int c1;
};
struct data st[100],temp;
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
    
scanf("%d",&cas);

for(l=0;l<cas;l++){
   
scanf("%d %d",&m,&n);   
           
for(i=0;i<m;i++)
 scanf("%s",a[i]);

z=-1;
for(p=97;p<=122;p++){ 
 z++;                     
 st[z].ch=p;
 r=0;
for(i=0;i<m;i++) 
 for(j=0;j<n;j++){
   if(a[i][j]!=p)
   b[i][j]=3000;
 else if(a[i][j]==p){
   b[i][j]=r;
   r++;
   flag=1;
  }
 }

if(flag==0){
 
 st[z].c1=0;
 continue; }


N=r;


for(i=0;i<N;i++)
 for(j=i;j<N;j++)
  G[i][j]=G[j][i]=0;
  

for(i=0;i<m;i++)
 for(j=0;j<n;j++)
  if(b[i][j]>=0&&b[i][j]<N){
                        
     if(i+1<m)
      if(b[i+1][j]!=0)
        G[b[i][j]][b[i+1][j]]=G[b[i+1][j]][b[i][j]]=1;
                                
     
     if(j+1<n) 
      if(b[i][j+1]!=0)
        G[b[i][j]][b[i][j+1]]=G[b[i][j+1]][b[i][j]]=1; 

           
      if(i-1>=0) 
      if(b[i-1][j]!=0)
        G[b[i][j]][b[i-1][j]]=G[b[i-1][j]][b[i][j]]=1;  
  
            
      if(j-1>=0) 
      if(b[i][j-1]!=0)
        G[b[i][j]][b[i][j-1]]=G[b[i][j-1]][b[i][j]]=1;  
        
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

st[z].c1=co;

}

for(i=0;i<26;i++) 
 for(j=0;j<25;j++)
  if(st[j].c1<st[j+1].c1){
    temp=st[j];
    st[j]=st[j+1];
    st[j+1]=temp;
   }
   
printf("World #%d\n",l+1);

for(i=0;i<26;i++)
 if(st[i].c1!=0)
  printf("%c: %d\n",st[i].ch,st[i].c1);
  
}

return 0;
}   
