#include<stdio.h>
#include<string.h>


int main(){
    char a[500];
    int c[500],i,j,n,f=0,l,sum[500],carry,len,g;
    
    for(i=0;i<500;i++)
     sum[i]=0;
     
     while(scanf("%s",a)==1){
       n=strlen(a);
       if(n==1&&a[0]=='0'){
        for(i=len-1;i>=0;i--)
         printf("%d",sum[i]);
          printf("\n");                   
          break; }
        
    
      if(f==0){
        l=n;
        f=1;
        }     
      
      j=0;
      for(i=n-1;i>=0;i--){
       c[j]=a[i]-48;
       j++;}    
     if(f==1){ 
      f=2;         
     for(i=j-1;i>=0;i--){
      sum[i]=c[i];
      
      }    
      
     continue;
     }
   
  if(n<=l){         
    len=l;                
     for(i=n;i<l;i++)
      c[i]=0;
      }
  else if(n>l){
    len=n;   
    for(i=l;i<n;i++)
     sum[i]=0; }
  
 
 
  carry=0;
  for(i=0;i<len;i++){
   sum[i]=sum[i]+c[i]+carry;
   carry=0;
  
   if(sum[i]>9){
         carry=sum[i]/10;
         sum[i]=sum[i]%10; 
} 

}
g=0;
if(carry!=0){
 
 sum[len]=carry;
 g=1;}
 
  if(g==1)
   len=len+1;
  l=len;
}

return 0;
}  
        
