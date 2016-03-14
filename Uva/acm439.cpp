#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
char a[10],b[10];
int i,j,k,m,n,G[100][100],pre[100],visited[100],u,v,co,p,q,r,s;
int x1[10]={ 1, 2, 2, 1,-1,-2,-2,-1};
int x2[10]={-2,-1, 1, 2, 2, 1,-1,-2};


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
	      for(v=1;v<=n;v++){

	      if(G[u][v]==1&&visited[v]==0)
	      {

            visited[v]=1;

            pre[v]=u;
	        Q.push(v);
	      }
	      }

	    visited[u]=2;

	    }
}

void printpath(int s,int v)
{
   if(v==s)
    return;

   else
   {
    co++;
    printpath(s,pre[v]);
    //printf("*%d ",v);
   }
}



int main(){


for(i=1;i<=8;i++)
 for(j=1;j<=8;j++)
 {
   q=i;
   p=j;
   s=(8*q)-(8-p);
  // printf("%d\n",s); getch();
  for(k=0;k<8;k++)
  {
   m=p+x1[k];
   n=q+x2[k];
 //  printf("k=%d %d %d\n",k+1,m,n); getch();
   if(m>8||m<1||n>8||n<1)
    continue;
   // printf("k=%d %d %d\n",k+1,m,n);
   r=(8*n)-(8-m);
   G[r][s]=G[s][r]=1;
   //printf("%d\n",r); getch();
  }
 }

 while(scanf("%s %s",a,b)==2)
 {

  r=8*(a[1]-48)-(8-(a[0]-96));
  s=8*(b[1]-48)-(8-(b[0]-96));
  co=0;
  BFS(r,64);
  printpath(r,s);

 printf("To get from %s to %s takes %d knight moves.\n",a,b,co);
 //printf("%d %d",r,s);
 }




return 0;
}
