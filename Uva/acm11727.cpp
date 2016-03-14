
#include<stdio.h>

int main(){

    long i,j,k,n,a[4];

    scanf("%ld",&n);

    for(k=0;k<n;k++){

     for(i=0;i<3;i++)
       scanf("%ld",&a[i]);

     for(i=0;i<3;i++)
      for(j=0;j<2;j++)
       if(a[j]<a[j+1]){
        a[3]=a[j];
        a[j]=a[j+1];
        a[j+1]=a[3]; }

     printf("Case %ld: %ld\n",k+1,a[1]);
    }
return 0;
}
