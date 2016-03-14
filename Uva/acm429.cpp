#include<stdio.h>
#include<queue>
#include<string.h>
#include<iostream>
#include<map>
using namespace std;

int i,j,k,l,m,n,N,cas,G[201][201],pre[201],visited[201],co,u,v,f1=0;
char a[201][20],b[20],c[20],str[100],*pch;
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
    return;
   else if(pre[v]==-1)
   {
    co=0;
    return;
   }
   else
   {
    co++;
    printpath(s,pre[v]);
   }
}


int main()
{

scanf("%d",&cas);

  for(l=0;l<cas;l++)
  {

    if(f1!=0)
     printf("\n");
     f1=1;
    N=0;
    map<string,int>mp;
    while(scanf("%s",b)==1)
    {
      if(strcmp(b,"*")==0)
       break;
      mp[b]=N+1;
      strcpy(a[N],b);
      N++;
    }

    for(i=1;i<=N;i++)
     for(j=i;j<=N;j++)
      G[i][j]=G[j][i]=0;

    for(i=0;i<N-1;i++)
     for(j=i+1;j<N;j++)
     {
      n=strlen(a[i]);
      m=strlen(a[j]);

      if(n!=m)
       continue;
      co=0;
      for(k=0;k<n;k++)
      {
       if(a[i][k]!=a[j][k])
        co++;

       if(co>1)
        break;
      }

      if(co==1)
       G[mp[a[i]]][mp[a[j]]]=G[mp[a[j]]][mp[a[i]]]=1;

     }


    getchar();
    while(gets(str))
    {
        if(strcmp(str,"")==0)
         break;


      i=0;
      pch = strtok (str," ");
      while (pch != NULL)
      {
       if(i==0)
       {
        strcpy(b,pch);
        i=1;
       }
       else if(i==1)
       {
        strcpy(c,pch);
       }

       pch = strtok (NULL, " ");

      }

        if(mp[b]==0||mp[c]==0)
        {
            printf("%s %s 0\n",b,c);
            continue;
        }

        BFS(mp[b],N);
        co=0;
        printpath(mp[b],mp[c]);

         printf("%s %s %d\n",b,c,co);

    }

    }

return 0;
}

