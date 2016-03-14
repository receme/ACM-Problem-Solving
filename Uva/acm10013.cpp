#include<stdio.h>
int a[1000001],b[1000001],i,j,n,sum[1000001],l,cas,carry;

int main(){
    
    
    scanf("%d",&cas);
    
    for(l=0;l<cas;l++){
     
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
       scanf("%d %d",&a[i],&b[i]);
       carry=0;
     j=0;
     for(i=n-1;i>=0;i--){
       sum[j]=a[i]+b[i]+carry;
       carry=0;
       if(sum[j]>9){
          carry=sum[j]/10;
          sum[j]=sum[j]%10;  }
       j++;                                
       }
       
      
     if(carry!=0)
      printf("%d",carry);   
     for(i=j-1;i>=0;i--)
      printf("%d",sum[i]);
     
     
      printf("\n");
      if(l!=cas-1)
       printf("\n");
       
       
      
      }
   
 return 0;
 
}  
