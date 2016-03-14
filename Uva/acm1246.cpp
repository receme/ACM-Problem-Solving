#include<stdio.h>

int cas,i,j,k,l,m,n,co;
int a[10001];

int isprime(int p)
{
     if(p==2)
          return 1;
     if(p%2==0||p==1)
          return 0;

     for(int z=3; z<p; z=z+2)
          if(p%z==0)
               return 0;

     return 1;

}


void check()
{
     for(i=2; i<=10000; i++) {

          n=i;
          co=0;
          for(j=1; j<=n; j++)
               if(n%j==0)
                    co++;


          if(isprime(co)==1)
               a[i]=1;
          else
               a[i]=0;

     }

}


int main()
{
     a[0]=0;
     a[1]=0;
     check();

     scanf("%d",&cas);

     for(l=0; l<cas; l++) {

          scanf("%d %d",&m,&n);

          co=0;
          for(i=m; i<=n; i++)

               if(a[i]==1) {
                    if(co!=0)
                         printf(" ");
                    printf("%d",i);
                    co++;


               }



          if(co==0)
               printf("-1");


          printf("\n");

     }


     return 0;
}
