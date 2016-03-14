
#include<stdio.h>

int main(){
    
    long i,k,l,a,b,s[10000];
    
    while(scanf("%ld %ld",&a,&b)==2){
                                 
    k=0;
    for(;;){
     
     s[k]=a/b;
     l=b;
     b=a%b;
     a=l;
     k++;
     
     if(b==0) break; }
     
     printf("[%ld;",s[0]);
     
     for(i=1;i<k;i++){
      printf("%ld",s[i]);
      if(i!=k-1)
       printf(","); }
      printf("]\n");
      
      }
      
return 0;
}
      
    
    
