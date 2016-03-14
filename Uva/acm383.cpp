#include<stdio.h>
#include<queue>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

int i,j,l,cas,m,n,M,N,P,G[50][50],visited[50],pre[50],co,u,v,flag;
char a[10],b[10];
queue<int>Q;

void BFS(int s, int n)
{
	    for(i=1;i<=n;i++)
	    {
	     visited[i]=0;
	     pre[i]=-1;
        }

	    visited[s]=1;
	    pre[s]=-1;

	    Q.empty();

	    Q.push(s);

        while(!Q.empty())
        {


          u=Q.front();

          Q.pop();
	      for(v=1;v<=n;v++)
	      if(G[u][v]==1&&visited[v]==0)
	      {

            visited[v]=1;
	        pre[v]=u;
	        Q.push(v);
	      }

	    visited[u]=2;

	    }
}

int printpath(int s,int v)
{
   if(v==s)
   {
      return co;
   }
   else if(pre[v]==-1)
   {
     return -1;
   }
   else
   {
    co++;
    printpath(s,pre[v]);
   }
}


int main(){

   printf("SHIPPING ROUTES OUTPUT\n\n");

    scanf("%d",&cas);

for(l=0;l<cas;l++)
{
    scanf("%d %d %d",&M,&N,&P);

  map<string,int>mp;

   for(i=1;i<=M;++i)
    for(j=1;j<=i;++j)
     G[i][j]=G[j][i]=0;

   for(i=0;i<M;i++)
   {
       scanf("%s",a);
       mp[a]=i+1;
   }

   for(i=0;i<N;i++)
   {
    scanf("%s %s",a,b);
    G[mp[a]][mp[b]]=G[mp[b]][mp[a]]=1;


   }

   printf("DATA SET  %d\n\n",l+1);
   for(j=0;j<P;j++)
   {
     scanf("%d %s %s",&m,a,b);

     if(N==0)
     {
      printf("NO SHIPMENT POSSIBLE\n");
      continue;
     }
     if(G[mp[a]][mp[b]]==1||G[mp[b]][mp[a]]==1)
     { printf("$%d\n",(m*100));
       continue;
     }

     if(mp[a]==0||mp[b]==0)
     {
        printf("NO SHIPMENT POSSIBLE\n");
        continue;
     }
     co=0;

     BFS(mp[a],M);

     flag=printpath(mp[a],mp[b]);

     if(flag==-1)
       printf("NO SHIPMENT POSSIBLE\n");

     else
     {
      m=m*(co)*100;
      printf("$%d\n",m);
     }


   }
   printf("\n");
}

printf("END OF OUTPUT\n");


return 0;
}


