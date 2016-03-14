#include<stdio.h>


long i,j,n,cas,l,flag;

int main(){
    
    scanf("%ld",&cas);
    
    for(l=0;l<cas;l++){
    
     scanf("%ld",&n);
     
     n=n/2;
     
   if(n%2==0)
    n=n+1;
   else
    n=n+2;
   for(i=n;;i=i+2){
    flag=0;
    for(j=3;j*j<=i;j=j+2)
     if(i%j==0){
      flag=1;
      break; }
      
    if(flag==0){
     printf("%ld\n",i);
     break; }  
  }
  
}

return 0;
}       
        
