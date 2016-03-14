#include<stdio.h>
#include<math.h>


long d,x,i,j,k,l,dis[65000],result[1000010],temp,co1,co,t,cas,n,m,p,sum;

int isprime(long n)
{
  if(n==1)
   return 0;
  if(n==2)
   return 1;
  if(n%2==0)
   return 0;

  for(j=3;j*j<=n;j=j+2)
   if(n%j==0)
    return 0;

   return 1;

}


int divisor(long n)
{

   if(isprime(n)==1)
     return 2;

  co=2;
  for(i=2;i<=sqrt(n);i++)
  {
     temp=n/i;

     if(n%i==0)
     {
      if(temp==i){
       co++;
       }
      else{
       co=co+2;
          }
     }

  }
   return co;
}

void precalculation()
{
  dis[0]=1;
  dis[1]=1;
  dis[2]=2;
  result[0]=0;
  result[1]=1;
  result[2]=2;
  co1=2;
  for(x=3;x<=64726;x++){
      d=divisor(dis[x-1]);

   dis[x]=dis[x-1]+d;
   for(j=dis[x-1]+1;j<dis[x];j++)
    result[j]=co1;
    co1++;
    result[dis[x]]=co1;

  }


  }

int main()
{


precalculation();

scanf("%ld",&cas);

for(t=0;t<cas;t++)
{
  scanf("%ld %ld",&m,&p);

 sum=result[p]-result[m-1];
printf("Case %ld: %ld\n",t+1,sum);
}


return 0;
}
