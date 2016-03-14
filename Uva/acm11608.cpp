#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[15],b[15],i,k,n,l=0;
    
    while(scanf("%d",&n)==1){
       if(n<0) break;
       
       for(i=0;i<12;i++)
         scanf("%d",&a[i]);
       for(i=0;i<12;i++)
         scanf("%d",&b[i]);
       l++;
       printf("Case %d:\n",l);
       k=n;
       if(k>=b[0]){
        printf("No problem! :D\n");
        n=n-b[0];}
       else
        printf("No problem. :(\n");  
      
      
      for(i=1;i<12;i++){
      k=n+a[i-1];
      n=k;
      if(k>=b[i]){
       printf("No problem! :D\n");
        n=n-b[i];}
       else
        printf("No problem. :(\n");
        
        }   
        
        
    
        
}

return 0;
}      
            
       
