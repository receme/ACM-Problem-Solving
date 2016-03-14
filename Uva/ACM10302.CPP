#include<stdio.h>
#include<math.h>

int main(){
 long i,j,k,n,sum;

    while(scanf("%ld",&n)!=EOF){
    sum=0;
        for(i=1;i<=n;i++){
            k=i;
         for(j=0;j<2;j++)
              k=k*i;
          sum=sum+k;}

         printf("%ld\n",sum);
    }
    return 0;
}
