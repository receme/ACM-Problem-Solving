#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
//#include<conio.h>
using namespace std;
long par[1000020],i,j,k,l,u,v,m,n,r,s,t,cas,co,I,mm,st,count1[1000020],big;
char a[40],b[40];
map<string,int>mp;

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
        return find(par[r]);
        //return par[r]=find(par[r]);
                                                    //else find representative of parent of r
    }
}

void Union(long a,long b)
{
     u=find(a);
     v=find(b);
  // printf("u=%d v=%d\n",u,v); getch();
   //if(u==v)
     //printf("%ld\n",count1[u]);
      //////puts("THEY ARE ALREADY FRIENDS");
    if(u!=v)
    {
        par[v]=u; //or you can write par[v]=u too
        count1[u]=count1[u]+count1[v];
      if(count1[u]>big)
       big=count1[u];
     // printf("%ld\n",count1[u]);
      //  par[v]=u;

    }
}

int main()
{

   while(scanf("%ld %ld",&m,&n)==2)
   {
    if(m==0&&n==0)
     break;


    for(i=1;i<=m;i++){
    makeset(i);
    count1[i]=1; }

    k=1;
    mp.clear();

    for(i=0;i<m;i++)
    {
        scanf("%s",a);
        mp[a]=k;
        k++;
   }



    big=1;

    for(I=0;I<n;I++){
     scanf("%s %s",a,b);

     if(mp[a]<mp[b])
      Union(mp[a],mp[b]);
     else
      Union(mp[b],mp[a]);



    }


    printf("%ld\n",big);





   }

return 0;
}

