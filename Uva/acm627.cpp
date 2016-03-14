#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;

int x1,x2,N,i,j,k,l,m,n,cas,flag,G[301][301],visited[301],pre[301],a[100],num,u,v,co;
char str[1000];
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

void printpath(int s,int v)
{
   if(v==s)
   {
    a[co]=s;
    co++;
   }
   else if(pre[v]==-1)
   {
    co=0;
    return;
   }
   else
   {

    printpath(s,pre[v]);
    a[co]=v;
    co++;
   }
}


int main(){

//freopen("in.txt","r",stdin);
 while(scanf("%d\n",&N)==1)
 {

  for(i=1;i<=N;++i)
    for(j=1;j<=i;++j)
     G[i][j]=G[j][i]=0;

  for(l=0;l<N;l++)
  {
   gets(str);

  char * pch;
  k=0;
  pch = strtok (str," ,-");
  while (pch != NULL)
  {
    n=strlen(pch);
    num=0;
    j=1;
    for(i=n-1;i>=0;i--)
    {
     num=num+(pch[i]-48)*j;
     j=j*10;
    }
    a[k]=num;
    k++;

    pch = strtok (NULL, " ,-");
  }

     for(i=1;i<k;i++)
      G[a[0]][a[i]]=1;


  }


   scanf("%d",&n);
   printf("-----\n");
   for(l=0;l<n;l++)
   {
      scanf("%d %d",&x1,&x2);
      co=0;
      BFS(x1,N);
      printpath(x1,x2);

    if(co==0)
     printf("connection impossible\n");
    else
    {
    for(i=0;i<co;i++)
    {
     printf("%d",a[i]);
     if(i!=co-1)
      printf(" ");
    }

    printf("\n");
    }


   }


 }



return 0;
}
