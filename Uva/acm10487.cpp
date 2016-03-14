#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

long cas=1,r,a[10000001],d,b[1001],flag,p,k,j,sum,m,i,n,l;



int main()
{
     while(scanf("%ld",&n)==1) {
          if(n==0)
               break;

          k=0;
          for(i=0; i<n; i++) {
               scanf("%ld",&b[i]);
               if(i==0)
                    continue;

               for(j=0; j<i; j++) {

                    a[k]=b[i]+b[j];
                    k++;
               }


          }
         // sort(a,a+k);


          scanf("%ld",&m);

          printf("Case %ld:\n",cas);
          for(l=0; l<m; l++) {
               scanf("%ld",&p);
               d=1000000000;
               for(i=0; i<k; i++) {
                    j=abs(a[i]-p);
                    if(j<d) {
                         d=j;
                         r=i;
                    }
               }
               printf("Closest sum to %ld is %ld.\n",p,a[r]);

          }

          cas++;
     }



     return 0;
}
