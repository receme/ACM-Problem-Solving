
#include<stdio.h>

int main(){

    long i,a,b,count,j,c=1;

    while(scanf("%ld %ld",&a,&b)==2){
     if(a<0&&b<0)break;
    if(a==0||b==0)continue;
  count=0;
   i=a;
    while(i!=1){
    if(i%2!=0)
     i=3*i+1;
    else
     i=i/2;
     count++;
     if(i>b)break; }

     if(i==1)count++;

     printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",c,a,b,count);

    c++;
    }
return 0;
}
