#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>


using namespace std;
char t;
char a,b,ch[10000],c1,ch1[10000];
int visited[31],pre[31],v,co=0,G[31][31],f1=0;
int i,j,jj,k,l,m,n,u,cas,r,flag;
queue<int>Q;
map<char,int>mp;
map<int,char>mp1;

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
   {

    t=mp1[s];
    ch[co]=t;

    co++;

   }
   else
   {

    printpath(s,pre[v]);
    t=mp1[v];
    ch[co]=t;

    co++;

   }
}


int main()
{
//freopen("in.txt","r",stdin);
scanf("%d",&cas);

for(l=0;l<cas;l++)
{
   for(i=0;i<31;i++)
   for(j=0;j<i;j++)
    G[i][j]=G[j][i]=0;

   scanf("%d %d\n",&m,&r);





 mp.clear(); mp1.clear();

 k=0;
 for(i=0;i<m;i++)
 {


  scanf("%c",&a);

  for(;;){
    scanf("%c",&c1);
    if(c1==' ')
     break; }


  scanf("%c",&b);

  for(;;){
    scanf("%c",&c1);
    if(c1=='\n')
     break; }

  //printf("%c %c",a,b);

  if(mp[a]==0)
  {
   k++;
   mp[a]=k;
   mp1[k]=a;

  }

  if(mp[b]==0)
  {
      k++;
      mp[b]=k;
      mp1[k]=b;

  }
  G[mp[a]][mp[b]]=G[mp[b]][mp[a]]=1;

 }




 if(f1!=0)
   printf("\n");

   f1=1;

 for(j=0;j<r;j++)
 {
  scanf("%c",&a);

   for(;;){
    scanf("%c",&c1);
    if(c1==' ')
     break; }

  scanf("%c",&b);

  for(;;){
    scanf("%c",&c1);
    if(c1=='\n')
     break; }

  if(G[mp[a]][mp[b]]==1){
   printf("%c%c\n",a,b);
   continue ; }

  co=0;

  BFS(mp[a],k);
  flag=0;
  printpath(mp[a],mp['R']);
  BFS(mp['R'],k);
 // printf("**");
  printpath(mp['R'],mp[b]);

int co1=0;


  for(i=0;i<co;i++)
  {
   flag=0;
   for(jj=i+1;jj<co;jj++)
    if(ch[i]==ch[jj]){
       flag=1;
       break; }

   if(flag==0){
    ch1[co1]=ch[i];
    co1++; }
   else
   {
    ch1[co1]=ch[jj];
    i=jj;
    co1++;
   }
  }




  for(i=0;i<co1;i++)
   printf("%c",ch1[i]);

   printf("\n");


 }

}

return 0;
}
