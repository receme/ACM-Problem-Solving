#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
//#include<conio.h>
using namespace std;

int G[101][101],dist[101],visited[101],pre[101],i,ii,j,jj,k,l,m,n,t,cas,p,q,u,v,co,big,r;
vector<int>a,b;
queue<int>Q;
void BFS(int s, int n)
{
      for(i=0;i<=n;i++)
      {
       visited[i]=0;
       //dist[i]=max;
       pre[i]=-1;
        }

      visited[s]=1;
      //dist[s]=0;
      //pre[s]=-1;

      Q.empty();

      Q.push(s);


        while(!Q.empty())
        {


          u=Q.front();

          Q.pop();

        for(v=1;v<=n;v++)
        if(G[u][v]==1&&visited[v]==0)
        {
            co++;
            //printf("*");
            visited[v]=1;
          //dist[v]=dist[u]+1;
            //pre[v]=u;
          Q.push(v);
          k=v;
          break;
        }

      visited[u]=2;
      }
}
/*
void printpath(int s,int v)
{
   if(v==s)
    printf("%d ",s+1);

   else if(pre[v]==-1)
    return;
   else
   {
    co++;
    printpath(s,pre[v]);
    printf("%d ",v+1);
   }
}
*/
int main()
{
    t=0;
   while(scanf("%d",&n)==1)
   {
      if(n==0)
       break;

      scanf("%d",&m);

      for(i=0;i<=n;i++)
       for(j=i;j<=n;j++)
        G[i][j]=G[j][i]=0;

      r=0;
      k=m;
      a.clear();
      b.clear();
      while(scanf("%d %d",&p,&q)==2)
      {
           if(p==0&&q==0)
            break;

           G[p][q]=1;

           if(p==m)
           {
             a.push_back(p);
             b.push_back(q);
             //a[r]=p;
             //b[r]=q;
             //r++;
           }
      }
             big=0;
             r=a.size();
             //printf("r=%d\n",r);
              for(ii=0;ii<r;ii++)
              {

                for(jj=0;jj<r;jj++)
                 if(ii!=jj)
                  G[a[jj]][b[jj]]=0;
              co=0;
              BFS(m,n);

             if(co>=big){
               big=co;
               l=k;
              }
              //printf("co=%d %d %d\n",co,a[ii],b[ii]); getch();

              //printf("co=%d l=%d\n",co,l); getch();
                 for(jj=0;jj<r;jj++)
                 if(ii!=jj)
                  G[a[jj]][b[jj]]=1;

              }

             printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",t+1,m,big,k);

  t++;

   }
return 0;
}
