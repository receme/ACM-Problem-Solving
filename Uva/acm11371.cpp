
#include<stdio.h>

long i,j,k,m,n,a[1000],b[1000],t,sum1,sum2,p,d,count;
int main(){
while(scanf("%ld",&n)!=EOF){
    m=n;
    i=0;
    while(m!=0){
     a[i]=m%10;
     m=m/10;
     i++; }
     for(j=0;j<i;j++)
      for(k=0;k<i-1;k++)
       if(a[k]<a[k+1]){
           t=a[k];
           a[k]=a[k+1];
           a[k+1]=t; }

     k=0;
    for(j=i-1;j>=0;j--){
     b[k]=a[j];
     k++; }

    if(b[0]==0){
  for(j=0;j<i;j++)
   if(b[j]!=0)
    break;
    b[0]=b[j];
    b[j]=0;
    }

     sum1=0; k=1;
    for(j=i-1;j>=0;j--){
     sum1=sum1+a[j]*k;
     k=k*10;}

    sum2=0; k=1;
    for(j=i-1;j>=0;j--){
     sum2=sum2+b[j]*k;
     k=k*10;}

  d=sum1-sum2;

   if(d<0)
    d=-d;

   p=d/9;

   if(sum1>sum2)
    printf("%ld - %ld = %ld = 9 * %ld\n",sum1,sum2,d,p);
   else
    printf("%ld - %ld = %ld = 9 * %ld\n",sum2,sum1,d,p);

}

return 0;
}
