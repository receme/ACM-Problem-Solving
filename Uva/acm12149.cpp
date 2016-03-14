#include<stdio.h>


int i,n,k,a[101];

int main()
{
  a[1]=1;
  for(i=2;i<=100;i++)
  {
    a[i]=a[i-1]+i*i;
  }

  while(scanf("%d",&n)==1)
  {
      if(n==0)
       break;


     printf("%d\n",a[n]);
  }

return 0;
}
