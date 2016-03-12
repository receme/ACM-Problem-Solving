#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
double r[101],s[101],p,q,d,minn;
int i,j,k,t,cas,n,E;

struct edge
{
int st,end;
double dist;
};

edge edges[10001];
int rank[10001];
int parent[101];

inline bool cmp (edge a,edge b)
{
return a.dist<b.dist;
}


int find_parent(int i)
{
if(i!=parent[i])
parent[i]=find_parent(parent[parent[i]]);
return parent[i];
}


void link(int x,int y)
{
if(rank[x]>rank[y])
parent[y]=x;
else
{
parent[x]=y;
if(rank[x]==rank[y])
rank[y]++;
}

}

void kruskal()
{
int i=0,j=0,u,v;

for(i=0;i<E; i++)
{
u=find_parent(edges[i].st);
v=find_parent(edges[i].end);
if(u==v)
continue;

link(u,v);

j++;
minn+=edges[i].dist;
}

printf("%.2lf\n",minn);

}

int main()
{
   scanf("%d",&cas);

  for(t=0;t<cas;t++)
  {
     scanf("%d",&n);

     for(i=1; i<=n; i++)
     {
      parent[i]=i;
      rank[i]=0;
     }

     scanf("%lf %lf",&r[0],&s[0]);
     k=0;
     p=1;

     for(i=1;i<n;i++)
     {
      scanf("%lf %lf",&r[i],&s[i]);
      p++;

      for(j=0;j<i;j++)
      {

      d=double(sqrt((r[i]-r[j])*(r[i]-r[j])+(s[i]-s[j])*(s[i]-s[j])));

      edges[k].st=j+1;
      edges[k].end=p;
      edges[k].dist=d;

      k++;
      }

     }

     E=k;

     sort(edges,edges+E,cmp);
     minn=0;

    if(t>0)
     printf("\n");
    kruskal();

  }

return 0;
}