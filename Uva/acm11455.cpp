#include<stdio.h>

long i,j,k,a[10],l,cas;

int main(){
    
    scanf("%ld",&cas);
   
  
  for(l=0;l<cas;l++){
                     
    scanf("%ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3]);
   
    
   if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[1]){
    printf("square\n");
    continue; } 
   
   for(i=0;i<4;i++)
    for(j=0;j<3;j++) 
     if(a[j]>a[j+1]){
     k=a[j];
     a[j]=a[j+1];
     a[j+1]=k ; }                      
    

    if(a[0]==a[1]&&a[2]==a[3]&&a[1]!=a[2]){
        printf("rectangle\n");
        continue; }
        
    if((a[0]+a[1]+a[2])<a[3])
       printf("banana\n");
    else
      printf("quadrangle\n");
                                           




}

return 0;
}                     
    
