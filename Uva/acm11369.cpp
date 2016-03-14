
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    long l,t,i,j,k,n,a[100000],b[100000],count;

    scanf("%ld",&t);

    for(l=0;l<t;l++){
        scanf("%ld",&n);

       for(i=0;i<n;i++)
        scanf("%ld",&a[i]);

       sort(a,a+n);
       k=0;
       for(i=n-1;i>=0;i--){
        b[k]=a[i];
        k++; }
       count=0;
      for(i=2;i<n;i=i+3)
        count=count+b[i];

      printf("%ld\n",count);

      }


      return 0;
}
