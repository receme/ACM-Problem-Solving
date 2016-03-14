#include<stdio.h>

long i,j,k,n,cas,l,sum,flag;

int main(){
   
    scanf("%ld",&cas);
    
    for(l=0;l<cas;l++){
    scanf("%ld",&n);
    if(n%8==7){
    printf("-1\n");
    continue;}
   flag=0;
    for(i=0;i*i<=n;i++)
    
    for(j=i;j*j<=n;j++)
     
     for(k=j;k*k<=n;k++){
      sum=i*i+j*j+k*k;
      
      if(sum>n){
        break; }   
      
      if(sum==n){
      flag=1;
      goto x; }
      }
 x: 
 if(flag==1)     
  printf("%ld %ld %ld\n",i,j,k); 
 else
  printf("-1\n");  
      
}

return 0;
}       
