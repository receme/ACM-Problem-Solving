#include<stdio.h>
#include<conio.h>

int main(){

long a[10],i,sum[6],s,k;
char b[6][5]={"GCB","GBC","CGB","CBG","BGC","BCG"};

 while((scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])==9)){
     sum[0]=a[4]+a[7]+a[2]+a[8]+a[0]+a[3];
     sum[1]=a[4]+a[7]+a[0]+a[6]+a[2]+a[5];
     sum[2]=a[5]+a[8]+a[1]+a[7]+a[0]+a[3];
     sum[3]=a[5]+a[8]+a[0]+a[6]+a[1]+a[4];
     sum[4]=a[3]+a[6]+a[1]+a[7]+a[2]+a[5];
     sum[5]=a[3]+a[6]+a[2]+a[8]+a[1]+a[4];

     k=0;
     s=sum[0];
     for(i=1;i<6;i++)
       if(sum[i]<=s){
        s=sum[i];
        k=i;}

     printf("%s %ld\n",b[k],s);

 }
 return 0;

}
