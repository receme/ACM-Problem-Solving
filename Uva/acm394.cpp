#include<stdio.h>
#include<math.h>
#include<string.h>

int p,i,j,k,l,NM,m,n,t,cas,B,D,U[1001],L[1001],c[1001],ans[1001],sum,co;
char a[100],ch;

struct data {

     char name[100];
     long arr[1001];
     int num;
};

struct data s[100];


int main()
{

     scanf("%d %d",&m,&n);

     co=0;
     for(i=0; i<m; i++) {
          scanf("%s %d %d %d",&a,&B,&D,&t);
          strcpy(s[co].name,a);
          c[t]=D;
          s[co].arr[t]=c[t];
          s[co].num=t;

          for(j=1; j<=t; j++) {
               scanf("%d %d",&L[j],&U[j]);

          }

          for(j=t-1; j>=1; j--) {
               c[j]=c[j+1]*(U[j+1]-L[j+1]+1);

               s[co].arr[j]=c[j];

          }

          sum=0;
          for(j=1; j<=t; j++)
               sum=sum+(c[j]*L[j]);

          c[0]=B-sum;
          s[co].arr[0]=c[0];



          co++;
     }

     for(i=0; i<n; i++) {
          scanf("%s",&a);

          for(l=0; l<co; l++)
               if(strcmp(s[l].name,a)==0) {
                    NM=l;
                    break;
               }


          sum=s[NM].arr[0];
          j=1;
          p=0;
          for(l=0; l<s[NM].num; l++) {
               scanf("%d",&k);
               ans[p]=k;
               p++;

               sum=sum+k*s[NM].arr[j];
               j++;

          }

          printf("%s[",s[NM].name);
          for(j=0; j<p; j++) {
               if(j!=0)
                    printf(", ");
               printf("%d",ans[j]);

          }
          printf("] = %d\n",sum);


     }

     return 0;
}
