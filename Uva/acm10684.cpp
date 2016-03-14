#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int i,k,n,a[10001],dp[10001];

int main()
{

 while(scanf("%d",&n)==1)
 {
  if(n==0)
   break;

  for(i=0;i<n;i++)
   scanf("%d",&a[i]);

  memset(dp,0,10001);
  dp[0]=a[0];

  for(i=1;i<n;i++)
   dp[i]=max(dp[i-1]+a[i],a[i]);

  sort(dp,dp+n);

  if(dp[n-1]>0)
   printf("The maximum winning streak is %d.\n",dp[n-1]);
  else
   printf("Losing streak.\n");


 }

return 0;
}
