#include<stdio.h>

int flag,r,p,i,k,l,m,n,t,cas;

int main()
{

 scanf("%d",&cas);

 for(t=0;t<cas;t++)
 {
     scanf("%d",&m);
     p=0;
     r=0;
     for(l=0;l<m;l++)
     {
        scanf("%d",&n);
        k=n;
        //p=0;
        flag=0;
          if(flag==0)
          {
            if(n>=29)
             p=p+10;
             n=n-29;
             flag=1;
          }

           p=p+(n/30)*10;
           if(n%30!=0)
            p=p+10;

        n=k;
       // r=0;
        flag=0;

          if(flag==0)
          {
            if(n>=59)
             r=r+15;
             n=n-59;
             flag=1;
          }

            r=r+(n/60)*15;
           if(n%60!=0)
            r=r+15;

     }
     if(p==r)
      printf("Case %d: Mile Juice %d\n",t+1,p);
     else if(p<r)
      printf("Case %d: Mile %d\n",t+1,p);
     else if(r<p)
       printf("Case %d: Juice %d\n",t+1,r);



 }

return 0;
}

