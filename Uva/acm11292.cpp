#include<stdio.h>
#include<algorithm>
using namespace std;

long i,j,m,n,a[20001],b[20001],sum,co;

int main(){
    
    
    while(scanf("%ld %ld",&n,&m)==2){
    
     if(n==0&&m==0) break;
     
     for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
     
     for(i=0;i<m;i++)
      scanf("%ld",&b[i]);
      
      sort(a,a+n);
      sort(b,b+m);
      
    
    if(m<n){
     printf("Loowater is doomed!\n");
     continue; }
    
    co=0; sum=0;
    j=0;
    i=0;
    for(;;){
      if(i==n||j==m) 
       break;
      
      if(a[i]<=b[j]){
       sum=sum+b[j];
       co++; 
       j++;
       i++;}
      else
       j++;
       
   }
   
   if(co!=n)
    printf("Loowater is doomed!\n");
   else
    printf("%ld\n",sum);
}

return 0;
}   
         
        
