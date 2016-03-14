
#include<stdio.h>

int main(){
    long i,j,k,n,m,flag,a[100],sum;

    while(scanf("%ld",&n)==1){

        if(n<0||n>1000000)continue;
        if(n==0||n==1000000){
          printf("%ld is not prime.\n",n);
          continue; }

        if(n==2||n==3||n==5||n==7){
         printf("%ld is prime.\n",n);
         continue; }


         if (n%2 == 0){
          printf("%ld is not prime.\n",n);
          continue; }
         flag=0;
         for (int i=3; i*i<=n; i+=2)
            if (n%i == 0){
             printf("%ld is not prime.\n",n);
             flag=1;
             break; }
           if(flag==1)continue;
         m=n;
         i=0;
         while(n!=0){
         a[i]=n%10;
         n=n/10;
         i++; }
         sum=0;k=1;
         for(j=i-1;j>=0;j--){
           sum=sum+a[j]*k;
            k=k*10; }
           // printf("\n\n%ld\n\n",sum);
            if(m==sum){
           printf("%ld is prime.\n",m);
           continue;}

          if(sum%2==0){
           printf("%ld is prime.\n",m);
           continue;}


          flag=0;

          for (int i=3; i*i<=sum; i+=2)
            if (sum%i == 0){
             flag=1;
             break;; }

          if(flag==0)
           printf("%ld is emirp.\n",m);
          else
           printf("%ld is prime.\n",m);

    }

    return 0;
}
