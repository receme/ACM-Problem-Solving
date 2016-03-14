
#include<stdio.h>
#include<math.h>

int main(){

    long i,j,k,a[100000],b[100000],n,x,y,c[100000],sum,l;

    while(scanf("%ld %ld",&x,&y)==2){

    for(i=0;i<100000;i++){
     a[i]=0;
     b[i]=0;}



    i=0;
    while(x!=0){
      a[i]=x%2;
      x=x/2;
      i++; }
      j=0;
    while(y!=0){
      b[j]=y%2;
      y=y/2;
      j++; }

    if(i>=j)
     n=i;
    else
     n=j;
   l=0;
    for(i=0;i<n;i++)
     if((a[i]==1&&b[i]==0)||(a[i]==0&&b[i]==1)){
        c[l]=1; l++; }
     else{
        c[i]=0;
        l++; }


   k=0;sum=0;
  for(j=0;j<l;j++){
    sum=sum+c[j]*pow(2,k);
    k=k+1; }

  printf("%ld\n",sum);
    }
  return 0;
     }









