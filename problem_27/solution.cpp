#include<stdio.h>

int i,j,k,n,st,a[30],co,re,ans[30];

int main()
{

  while(scanf("%d %d",&n,&k)==2)
  {
    if(n==0&&k==0)
     break;

    for(i=1;i<=n;i++)
     a[i]=0;

    j=1;
    st=1;
    co=0;
    re=0;
    while(1)
    {

      if(a[st]==40)
      {
        goto y;
      }


      if(re!=0)
      {
       if(a[st]+re>=40){
       re=a[st]+re-40;
       //printf("re=%d\n",re); getch();
       a[st]=40;

       ans[co]=st;
       co++;

       if(co==n)
        break;

       if(re==0)
       goto x;
       else
       goto y;
       }
       }

       if(re!=0){
       a[st]=a[st]+re;
       re=0;
       goto x; }

      if(a[st]+j>=40){
       re=a[st]+j-40;

       a[st]=40;
       ans[co]=st;


       co++;
       if(co==n)
        break;

       if(re==0)
       goto x;
       else
       goto y;
       }


      a[st]=a[st]+j;

      x:
      j++;
      if(j>k)
       j=1;

  y:
      st++;
      if(st==n+1)
      st=1;

    }

   for(i=0;i<co;i++){
    printf("%3d",ans[i]);
    }

     printf("\n");

  }


return 0;
}
