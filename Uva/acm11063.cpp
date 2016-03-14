#include<stdio.h>
#include<algorithm>
using namespace std;

long i,j,k,n,l=1,flag,a[200],sum[200000000];

int main(){
    
    while(scanf("%ld",&n)!=EOF){
      flag=0;
      for(i=0;i<n;i++){
       scanf("%ld",&a[i]);
       if(a[i]<=0||a[i]<a[i-1])
        flag=1; }      
      if(flag==1)
       goto x;
      k=0;
      for(i=0;i<n;i++)
       for(j=i;j<n;j++){ 
       sum[k]=a[i]+a[j];
       k++;
       }
      sort(sum,sum+k);
      flag=0; 
        
     for(i=0;i<k-1;i++)
      if(sum[i]==sum[i+1]){
        flag=1;
        break; }
     x:
    if(flag==0)
     printf("Case #%ld: It is a B2-Sequence.\n\n",l);
    else
     printf("Case #%ld: It is not a B2-Sequence.\n\n",l);
     
     l++;
      
      }   
      
      
      
return 0;
}
