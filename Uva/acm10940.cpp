#include<stdio.h>

long i,j,p,n,a[500001];

int main(){
  p=2;  
  a[1]=1;
  a[2]=2;
  
  for(j=3;;){
  p=2*p;
  
  for(i=2;i<=p;i=i+2){
    a[j]=i;
    j++; 
    
    if(j>=500000)
     break;  
     }
   
   if(j>=500000)
     break;
  }
  
 
  
 while(scanf("%ld",&n)==1){
      
    if(n==0)
     break;
    
  printf("%ld\n",a[n]);
}

return 0;
}           
   
