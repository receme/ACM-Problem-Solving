#include<stdio.h>

int i,j,k,m,n,a[100],max,sum;

int main(){

  while(scanf("%d",&n)==1){

    for(i=0;i<n;i++)
      scanf("%d",&a[i]);


    max=0;

    for(i=0;i<n-1;i++){
      k=i+1;
      sum=1;
      for(j=i;j<=k;j++){
        sum=sum*a[j];
        if(sum>max)
         max=sum;
      }

    k++;

  }

printf("%d\n",max);

  }

  return 0;
}
