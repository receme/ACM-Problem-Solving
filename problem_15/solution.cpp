#include<stdio.h>

int main(){

long i,j,k,n,count,a[1000];
float avg;

scanf("%ld",&k);

for(j=0;j<k;j++){

scanf("%ld",&n);

avg=0;
for(i=0;i<n;i++){
 scanf("%ld",&a[i]);
 avg=avg+a[i]; }

avg=avg/n;
  count=0;
 for(i=0;i<n;i++)
  if(a[i]>avg)
   count++;
  
  avg=(count*100)/(n*1.0);

  printf("%.3f%\n",avg);

 }
 return 0;
}