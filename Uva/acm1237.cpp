#include<stdio.h>
#include<string.h>

long i,j,k,l,m,n,t,cas,co,str;
char a[1000001][21];
long b[1000001],c[1000001];

int main()
{
  scanf("%ld",&cas);

 for(t=0;t<cas;t++)
 {
     if(t!=0)
      printf("\n");

     scanf("%ld",&m);

     for(i=0;i<m;i++)
     {
         scanf("%s %ld %ld",&a[i],&b[i],&c[i]);

     }
     scanf("%ld",&n);

     for(i=0;i<n;i++)
     {

        scanf("%ld",&str);

        co=0;
        for(j=0;j<m;j++)
        {
           if(str>=b[j]&&str<=c[j])
            {
            k=j;
            co++;
            }
            if(co>1)
            break;
        }

       if(co==1)
        printf("%s\n",a[k]);
       else
        printf("UNDETERMINED\n");
     }


 }



return 0;
}
