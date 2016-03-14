#include<stdio.h>

long W,H,B,N,i,j,p,m,n,a,b[100],big;

int main()
{
   while(scanf("%ld %ld %ld %ld",&N,&B,&H,&W)==4)
   {
       big=500001;
      for(i=0;i<H;i++)
      {
         scanf("%ld",&p);
         //flag=0;

         for(j=0;j<W;j++)
         {
             scanf("%ld",&a);

             if(a>=N)
             {
               m=N*p;
               if(m<big&&m<=B){
                big=m;
                //printf("big=%ld\n",big);
                }

             }
         }



      }
      if(big>500000)
       printf("stay home\n");
      else
       printf("%ld\n",big);

   }

return 0;
}
