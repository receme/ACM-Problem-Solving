#include<stdio.h>
#include<string.h>


char a[201],b[201],*pch;
int i,j,k,l,m,n,co;
double p;





int main()
{


     while(scanf("%s",a)==1) {
          if(a[0]=='*')
               break;

          co=0;
          pch = strtok (a,"/");
          while (pch != NULL) {

               strcpy(b,pch);
               n=strlen(b);
               p=0;

               for(i=0; i<n; i++)
               {
                 if(b[i]=='W')
                  p=p+1.0;
                 else if(b[i]=='H')
                  p=p+0.5;
                 else if(b[i]=='Q')
                  p=p+0.25;
                 else if(b[i]=='E')
                  p=p+0.125;
                 else if(b[i]=='S')
                  p=p+0.0625;
                 else if(b[i]=='T')
                  p=p+0.03125;
                 else if(b[i]=='X')
                  p=p+0.015625;
               }


               if(p==1.0)
                    co++;


               pch = strtok (NULL,"/");
          }
          printf("%d\n",co);
     }


     return 0;
}

