
#include<stdio.h>
#include<math.h>

int main(){

    long i,j,k,n,m,count1,count2,sum,p;
    long a[100];

    scanf("%ld",&n);

    for(i=0;i<n;i++){

        scanf("%ld",&m);

        p=m;
        count1=0;
        while(p!=0){
         k=p%2;
         p=p/2;
         if(k==1)
         count1++; }

        p=m;
           j=0;
        while(p!=0){
            a[j]=p%10;
            p=p/10;
            j++; }
          p=j-1;sum=0;
        for(k=j-1;k>=0;k--){
         sum=sum+a[k]*pow(16,p);
         p=p-1; }


         count2=0;
        while(sum!=0){
         k=sum%2;
         sum=sum/2;
         if(k==1)
         count2++; }

         printf("%ld %ld\n",count1,count2);

    }
    return 0;
}
