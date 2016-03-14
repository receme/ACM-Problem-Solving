
#include<stdio.h>

int main(){

    long i,j,k,n,s,d;

    scanf("%ld",&n);

    for(i=0;i<n;i++){

        scanf("%ld %ld",&s,&d);

        if(s<d){
         printf("impossible\n");
         continue; }
        if(s==d){
         printf("%ld 0\n",s);
         continue; }

       j=s+d;
       if(j%2!=0){
        printf("impossible\n");
        continue; }

       j=j/2;
       s=s-j;

       printf("%ld %ld\n",j,s);


    }

    return 0;
}
