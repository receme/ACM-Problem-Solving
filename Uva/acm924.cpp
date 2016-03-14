#include<stdio.h>
#include<queue>
//#include<conio.h>
#include<iostream>
//#include<algorithm>
using namespace std;

int visited[3000],v,co=0,G[3000][3000],flag,da,cas,u1;
int i,j,k,m,l,n,u;
queue<int>Q,tq;

struct data{
    int M,D;
}ss[1000],temp;



void BFS(int s, int n)
{
	    for(i=0;i<n;i++)
	    {
	     visited[i]=0;

        }

	    visited[s]=1;


	    Q.empty();
	    tq.empty();
	    Q.push(s);
        co=0;
        da=1;
        while(!Q.empty())
        {


          u=Q.front();

          Q.pop();

          flag=0;
          if(Q.empty()){
           flag=1;
          // printf("**\n"); getch();
          }

	      for(v=0;v<n;v++)
	      if(G[u][v]==1&&visited[v]==0)
	      {
            //printf("%d ",v); getch();
            co++;
            visited[v]=1;
	      //  dist[v]=dist[u]+1;
           // pre[v]=u;
	        tq.push(v);
	      }
	     // cout<<co<<da<<endl; getch();
          if(flag==1)
          {
            ss[da-1].D=da;
            ss[da-1].M=co;
            da++;
            co=0;

            while(!tq.empty()){
             u1=tq.front();
             Q.push(u1);
             tq.pop();
            // cout<<"++";
             }

          }


           for(i=0;i<Q.size();i++){
           u1=Q.front();
          // cout<< "* ";
           Q.pop();
           Q.push(u1);
           }
          // printf("\n"); getch();

	    visited[u]=2;

	    }
}


int main(){

  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
   scanf("%d",&m);

   for(k=0;k<m;k++)
   {
       scanf("%d",&j);

       G[i][j]=1;
   }


  }

scanf("%d",&cas);

for(l=0;l<cas;l++)
{
 scanf("%d",&m);
 co=0;
 da=1;

 for(i=0;i<1000;i++)
  ss[i].M=ss[i].D=0;
 BFS(m,n);


for(i=0;i<da;i++)
 for(j=0;j<da-1;j++)
  if(ss[j].M<ss[j+1].M){
   temp=ss[j];
   ss[j]=ss[j+1];
   ss[j+1]=temp; }

 if(ss[0].M==0)
  printf("0\n");
 else
 cout<<ss[0].M<<" "<<ss[0].D<<endl;


}

return 0;
}


