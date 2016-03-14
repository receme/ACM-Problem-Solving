#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int visited[101],v,co,G[101][101];
int N,I,i,j,m,n,u,M,P,St_Node;
queue<int>Q;

void BFS(int s, int n)
{
	    for(i=1;i<=n;i++)
	    {
	     visited[i]=0;
	    }

	   // visited[s]=0;


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
	        Q.push(v);
	      }

	    //visited[u]=0;

	    }
}


int main()
{
  while(scanf("%d",&N)==1)
  {
      if(N==0)
       break;

      for(i=0;i<=N;i++)
       for(j=i;j<=N;j++)
         G[i][j]=G[j][i]=0;

      while(scanf("%d",&M)==1)
      {
         if(M==0)
          break;

         while(scanf("%d",&P)==1)
         {
             if(P==0)
              break;

             G[M][P]=1;

         }


      }




      scanf("%d",&M);

      for(I=0;I<M;I++)
      {
          scanf("%d",&St_Node);

          BFS(St_Node,N);

        co=0;
         for(i=1;i<=N;i++)
         if(visited[i]==0)
          co++;

        printf("%d",co);
        for(i=1;i<=N;i++)
         if(visited[i]==0)
          printf(" %d",i);

         printf("\n");
      }


  }

return 0;
}
