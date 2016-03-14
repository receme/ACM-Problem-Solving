
#include<stdio.h>

int main(){
    
    long i,j,n,m,a[101];
    
    while(scanf("%ld",&n)==1){
      if(n==0) break;
    
    for(i=0;i<101;i++)
     a[i]=0;
    
    for(i=0;i<n;i++){                     
     scanf("%ld",&m);
     a[m]++;
     
     }
     
  
       m=0;
       for(i=0;i<=100;i++)
        for(j=0;j<a[i];j++){
         printf("%ld",i);
         m++;
         if(m!=n)printf(" "); }
         printf("\n");
        
     }
        
  return 0;
}    
     
     
