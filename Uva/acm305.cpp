#include<stdio.h>

int main(){
    long a[200],b[20],i,j,k,l,s,m,n,o,flag;
  
   for(n=1;n<=13;n++){
       if(n==0)
        break;
        o=n;        
       s=n+n; 
       for(k=n+1;;k++){
       n=s;
       for(i=1;i<=n;i++)
         a[i]=i;     
      
     m=1;
     for(l=1;l<=s-o;l++){
        m--;
        for(j=0;j<k;j++){
         m++;
         if(m>n)
          m=1; }
   
        for(i=m;i<=n;i++)
         a[i]=a[i+1];
         n--;
         } 
    
      flag=0;   
      for(i=1;i<=n;i++)  
       if(i!=a[i]){
        flag=1;
        break; }
      if(flag==0)
       break; 
       
     
        }   
     
      printf("%ld,",k);
         
         }

return 0;
}     
--------------------------------------------------
The submitted code:
    
#include<stdio.h>

int main(){
    long a[15]={2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    int n;
    
    while(scanf("%d",&n)==1){
      if(n==0) break;
      printf("%ld\n",a[n-1]);
      
      }
  return 0;
}    
    
    
