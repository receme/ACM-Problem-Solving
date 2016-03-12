#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
long par[50000],i,j,k,u,v,m,n,r,s,t,cas,co,I,count1[50000],big;


void makeset(long n){
    par[n]=n; //at first every element is parent of itself.
}

int find(long r) // ==find_representative()
{
    if(par[r]==r)
    {
     //printf("%d ",r); getch();
     return r;  //if r is parent of itself than r is representative

    }
    else
    {
        //return find(par[r]);
        return par[r]=find(par[r]);
                                                    //else find representative of parent of r
    }
}

void Union(long a,long b)
{
     u=find(a);
     v=find(b);
 
    if(u!=v)
    {
        par[v]=u; //or you can write par[v]=u too
        count1[u]=count1[u]+count1[v];
      if(count1[u]>big)
       big=count1[u];
 
    }
}

int main()
{

   scanf("%ld",&cas);

   for(t=0;t<cas;t++)
   {
    scanf("%ld %ld",&m,&n);
    for(i=1;i<=m;i++){
    makeset(i);
    count1[i]=1; }

    big=1;

    for(I=0;I<n;I++){
     scanf("%ld %ld",&r,&s);

     if(r<s)
      Union(r,s);
     else
      Union(s,r);

    }

    printf("%ld\n",big);

   }

return 0;
}