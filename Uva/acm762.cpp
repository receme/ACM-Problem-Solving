#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
#include<queue>
using namespace std;

int co,flag,u,v,i,j,k,l,n,G[2000][2000],visited[2000],pre[2000],path[2000];
char a[100],b[100];
map<string,int>mp;
map<int,string>mp1;
queue<int>Q;

void BFS(int s, int n)
{
	    for(i=0;i<n;i++)
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

void printpath(int s,int v)
{
   if(v==s){
    path[co]=s;
    co++; }
   else if(pre[v]==-1)
   {
    flag=1;
    return;
   }

   else
   {

    printpath(s,pre[v]);
    path[co]=v;
    co++;

   }
}


int main()
{
// freopen("in.txt","r",stdin);
int r=0;
while(cin>>n)
{


 mp.clear();
 mp1.clear();

 for(i=0;i<1200;i++)
  for(j=i;j<1200;j++)
   G[i][j]=G[j][i]=0;

 k=0;
 co=0;
 for(i=0;i<n;i++)
 {
  scanf("%s %s",a,b);

  if(mp[a]==0)
  {
   k++;
   mp[a]=k;
   mp1[k]=a;

  }

  if(mp[b]==0)
  {  k++;
      mp[b]=k;
      mp1[k]=b;

  }
  G[mp[a]][mp[b]]=G[mp[b]][mp[a]]=1;

 }


 scanf("%s %s",a,b);

if(r!=0)
  cout<<endl;
  r++;
if(strcmp(a,b)==0)
{
 printf("%s %s\n",a,a);
  continue;
}


if(mp[a]==0||mp[b]==0)
{
 printf("No route\n");
 continue;
}

flag=0;

 BFS(mp[a],k);
 printpath(mp[a],mp[b]);

if(flag==1)
 printf("No route\n");

else
{
 for(i=0;i<co-1;i++)
  cout<<mp1[path[i]]<<" "<<mp1[path[i+1]]<<endl;
}




}



return 0;
}

