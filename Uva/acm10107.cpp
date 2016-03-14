
#include<stdio.h>
#include<algo.h>

int main(){

    long i,m,n,p,r,a[10001],s;
   i=0;
    while(scanf("%ld",&n)!=EOF){


        a[i]=n;
        i++;

        if(i==1)
         {printf("%ld\n",n);continue; }

        if(i==2){
         r=(a[0]+a[1])/2;
         printf("%ld\n",r);continue; }


   sort(a,a+i);


    if(i%2!=0){
     r=i/2+1;
     printf("%ld\n",a[r-1]);}
    else{
     r=i/2;
     s=r+1;
     r=(a[r-1]+a[s-1])/2;
     printf("%ld\n",r);}

    }


    return 0;
}

