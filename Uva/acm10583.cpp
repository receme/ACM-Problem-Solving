#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;
long par[50001],i,j,k,u,v,m,n,r,s,t,cas,co,I,count1[50001],big;



void makeset(long n){
    par[n]=n; //at first every element is parent of itself.
}


int find(long r) // ==find_representative()
{

    if(par[r]==r)
    {

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

   //if(u==v)
     //printf("%ld\n",count1[u]);

    if(u!=v)
    {
        par[v]=u;

       big--;


    }
}

int main()
{




   t=0;
   while(scanf("%ld %ld",&m,&n)==2)
   {

    if(m==0&&n==0)
     break;

    for(i=1;i<=m;i++){
    makeset(i);
    count1[i]=1; }


    big=m;

    for(I=0;I<n;I++){
     scanf("%ld %ld",&r,&s);

     if(r<s)
      Union(r,s);
     else
      Union(s,r);



    }


    printf("Case %ld: %ld\n",t+1,big);
    t++;




   }

return 0;
}


