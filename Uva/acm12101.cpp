#include<stdio.h>
#include<math.h>
#include<map>
#include<string.h>
#include<queue>

using namespace std;

int i,j,k,a[1000],l,G[1510][1510],p,co,m,n,visited[1500],pre[1500],u,v,t,cas;
char st1[100],st2[100];

queue<int>Q;
map<int,int>mp;
void sieve(int L,int U) {
int i,j,d;
d=U-L+1; /* from range L to U, we have d=U-L+1 numbers. */
/* use flag[i] to mark whether (L+i) is a prime number or not. */
bool *flag=new bool[d];
for (i=0;i<d;i++) flag[i]=true; /* default: mark all to be true */
for (i=(L%2!=0);i<d;i+=2) flag[i]=false;
/* sieve by prime factors staring from 3 till sqrt(U) */
for (i=3;i<=sqrt(U);i+=2) {
if (i>L && !flag[i-L]) continue;
/* choose the first number to be sieved -- >=L,
divisible by i, and not i itself! */
j=L/i*i; if (j<L) j+=i;
if (j==i) j+=i; /* if j is a prime number, have to start form next
one */
j-=L; /* change j to the index representing j */
for (;j<d;j+=i) flag[j]=false;
}
if (L<=1) flag[1-L]=false;
if (L<=2) flag[2-L]=true;
k=0;
for (i=0;i<d;i++) if (flag[i]) {
 a[k]=(L+i);
 k++; }

}

void BFS(int s, int n)
{
	    for(i=0;i<=n;i++)
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
    ;
   else if(pre[v]==-1)
    return;
   else
   {
    co++;
    printpath(s,pre[v]);

   }
}

int main()
{
sieve(1000,9999);


p=1;
for(i=0;i<k;i++)
{
 if(mp[a[i]]==0)
 {
   mp[a[i]]=p;
   p++;
 }
 sprintf(st1,"%d",a[i]);

 for(j=0;j<k;j++)
 {
   if(mp[a[j]]==0)
 {
   mp[a[j]]=p;
   p++;
 }
   sprintf(st2,"%d",a[j]);

   co=0;

   for(l=0;l<4;l++)
     if(st1[l]!=st2[l])
      co++;

   if(co==1)
    G[mp[a[i]]][mp[a[j]]]=G[mp[a[j]]][mp[a[i]]]=1;


 }

}
scanf("%d",&cas);
for(t=0;t<cas;t++)
{
    scanf("%d %d",&m,&n);
    BFS(mp[m],p);
    co=0;
    printpath(mp[m],mp[n]);

    printf("%d\n",co);

}

return 0;

}
