
#include<stdio.h>

int main(){

    int sum,i,j,k,n,m,l,a[100][100],p,t,x,e,c=1;

    while(scanf("%d",&n)==1){
        if(n==0) break;

      if(n==1){
          scanf("%d",&i);
        printf("Case %d: %d\n",c,i);
        c++;
        continue; }



p=0;e=1;x=1;

        for(i=0;i<n;i++)
         for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);
if(n%2!=0){
      printf("Case %d:",c);
      for(t=1;t<=(n/2);t++){
          sum=0;
        for(j=p;j<n-p;j++)
         sum=sum+a[p][j];

         for(j=p;j<n-p;j++)
         sum=sum+a[n-(p+1)][j];

        for(j=p+1;j<n-x;j++)
          sum=sum+a[j][p]+a[j][n-(p+1)];


         printf(" %d",sum);

     p++;x=x+1;
    }

    printf(" %d\n",a[p][x-1]);

}

else{
    printf("Case %d:",c);
      for(t=1;t<=(n/2);t++){
          sum=0;
        for(j=p;j<n-p;j++)
         sum=sum+a[p][j];

         for(j=p;j<n-p;j++)
         sum=sum+a[n-(p+1)][j];

        for(j=p+1;j<n-x;j++)
          sum=sum+a[j][p]+a[j][n-(p+1)];


         printf(" %d",sum);

     p++;x=x+1;
    }
    printf("\n");
}

c++;

    }

    return 0;
}
