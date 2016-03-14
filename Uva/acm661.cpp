#include<stdio.h>


long i,j,k,n,m,c,a[1500],op,flag[1500],max,sum,l,cas=1;

int main(){
    
  while(scanf("%ld %ld %ld",&n,&m,&c)==3){
         if(n==0&&m==0&&c==0)
          break;
          
      for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
                      
    
 /*for(i=0;i<m;i++)
       scanf("%ld",&b[i]);*/
       
   for(i=0;i<=m;i++)
    flag[i]=0;
    sum=0;k=0;max=0;
    
    for(l=0;l<m;l++){
      scanf("%ld",&op);
      if(k==1){
           
       continue; }        
      if(flag[op-1]==0){
       sum=sum+a[op-1];
       flag[op-1]=1;
       }
      else if(flag[op-1]==1){
       sum=sum-a[op-1];
       flag[op-1]=0; }
       
      if(sum>c)
        k=1;
         
     
     if(sum>max)
      max=sum;
  
       
}
printf("Sequence %ld\n",cas);  
if(k==1)       
 printf("Fuse was blown.\n\n"); 
else
  printf("Fuse was not blown.\nMaximal power consumption was %ld amperes.\n\n",max);
 
 cas++;
}

return 0;
} 
 
 
                                                        
