#include<stdio.h>

long i,a[20],b[20];

int main(){
    
    a[0]=6; a[1]=35;
    
    for(i=2;i<10;i++)
      a[i]=a[i-1]*6-a[i-2];
   
   b[0]=8; b[1]=49;
   
   for(i=2;i<10;i++)
    b[i]=b[i-1]*6-(b[i-2]-2);
      
   for(i=0;i<10;i++)
    printf("%10ld%10ld\n",a[i],b[i]);
 
  return 0;
  
}   
      
    
