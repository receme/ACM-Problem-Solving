#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
//#include<conio.h>
using namespace std;

//vector<int>ans,take[102];
int i,j,k,m,n,taken[102],list[102], take[102][102],indegree[102],p,q;


int main()
{

while(scanf("%d %d",&n,&m)==2)
{
 if(n==0&&m==0)
  break;

 for(i=0;i<n;i++)
 {
 taken[i]=0;
 indegree[i]=0;
 }

 for(i=0;i<=n;i++)
  for(j=0;j<=n;j++)
  // take[i].clear();
    take[i][j]=0;


 for(i=0;i<m;i++)
 {
  scanf("%d %d",&p,&q);
  //take[p].push_back(q);
  ////take[q][p]=1;
  take[p-1][q-1]=1;
  indegree[q-1]++;
 //printf("%d\n",take[p][0]);
 }





int invalid = 0;

 for(i=0;i<n;i++) {
    for(j=0;j<n;j++)

    if( !indegree[j] && !taken[j]  ) {

        taken[j] = 1;
        list[i] = j;
        //printf("%d\n",j); getch();
        // in this step we are taking item j
        // we'd update the indegree[k] of items that depended on j
        for(k=0;k<n;k++)
         if( !taken[k] && take[j][k] )
         {
            --indegree[k];
            //printf("indegree[%d]=%d ",k,indegree[k]);
         }
        // printf("\n");

         break;
    }
  /*  if( j == n ) {
        invalid = 1;
        break;
    }*/

}

//if( !invalid )
//printf("There is no solution\n");
//else
for(i=0; i<n; i++)
{
     printf("%d", list[i]+1 );
     if(i<n-1)
     printf(" ");
}


/*
for(int i=0; i<n; i++) take1( i+1 );
    for(int i=n-1; i>=0 ;i-- ) {
    printf("%d", ans[i] );
    if(i>0)
     printf(" "); }
*/
printf("\n");
}
return 0;
}
