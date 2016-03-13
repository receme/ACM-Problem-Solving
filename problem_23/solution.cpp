#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

long i,j,p,a[45],cas;
double sum;

int main(){
    
    scanf("%ld",&cas);
    
    for(;cas>0;cas--){
    i=0;
    for(;;){
     scanf("%ld",&a[i]);
     if(a[i]==0)
      break;       
    i++;
    }
    
    sort(a,a+i);
    sum=0; a[44]=1;
   for(j=i-1;j>=0;j--){
   sum=sum+(2*pow(a[j],a[44]));
   a[44]++; }   
     
   if(sum>5000000)
    printf("Too expensive\n");
   else
    printf("%.0lf\n",sum);
    
 }
     
  return 0;
}