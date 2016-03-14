#include<stdio.h>

int big,l,cas,i,j,n,k,m,p,co,d[100001];

int main()
{
    scanf("%d",&cas);

    for(l=0;l<cas;l++)
    {
     scanf("%d",&n);

     scanf("%d",&p);

     if(n==1)
     {
         printf("Case %d: %d\n",l+1,p);
         continue;
     }
     d[0]=p;

     k=1;
     big=p;

     for(i=1;i<n;i++)
     {
      scanf("%d",&m);
      d[k]=m-p;
      if(d[k]>big)
       big=d[k];
      k++;
      p=m;
     }


     co=0;
     p=big;

     for(i=0;i<k;i++){
      if(d[i]>big){
        co=1;
        break; }

      else if(d[i]==big)
       big--;

    }





      printf("Case %d: %d\n",l+1,p+co);

   }



return 0;
}

