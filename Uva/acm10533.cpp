#include<stdio.h>
#include<iostream>
#include<cstdio>

using namespace std;

#define SIZE 1000002

long  a,b,i,j;
char data[SIZE]={0};
int dp[SIZE];
int nop[SIZE];
void sieve(void)
{
   int i, j, k;

   data[0] = 1;
   data[1] = 1;

   for (i=4; i<SIZE; i+=2)
   {
      data[i] = 1;
   }

   for (i=3; i<SIZE; i+=2)
   {
      if (!data[i])
      {
         k = SIZE / i;
     
         for (j=i; j<=k; j+=2)
         {
            data[i * j] = 1;
         }
      }

   
   }
}
int ds[SIZE];
   int dsum(int n){
      int &ret = ds[n];
      if(-1!=ret)return ret;

      if(n<10)return ret=n;

      return ret = n%10 + dsum(n/10);
   }

   void is_dp(){
      long x,z,ct=0,du,m=0;
       memset(ds,-1,sizeof(ds));

      for(i=0;i<SIZE;i++)
       {
          if(!data[i])
          {
             du = dsum(i);
          if(!data[du])
             {
                dp[i]=1;
             }
          }
       }   
   }
void sum_prime()
{
   int sum=0,dum,m=0,z;
   for(i=0;i<=SIZE;i++)
   {
      if(dp[i])
      {
         sum+=1;
      }
      nop[i]=sum;
   }
}
int main()
{
   long test;
   sieve();
   is_dp();
   sum_prime();
   scanf("%ld",&test);
   for(long i=0;i<test;i++)
   {
      scanf("%ld %ld",&a,&b);
      printf("%ld\n",nop[b]-nop[a-1]);
   
   }
   return 0;
}

