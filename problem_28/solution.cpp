#include<stdio.h>
#include<string.h>
//#include<conio.h>

char str[81],b[81];
int i,k,n,flag,a[20],sum,l,st,en;

int main(){
    
    while(gets(str)){
      n=strlen(str);
      if(n==0){
       printf(" is incorrect.\n");
       continue; }
      
      flag=0;
      k=0;
      
      for(i=0;i<n;i++){
                                
        if(str[i]>=48&&str[i]<=57){
          a[k]=str[i]-48;
          k++;
          }                        
        else if(k==9&&str[i]=='X'){
          a[k]=10;
          k++; } 
        else{
         continue;      
         }
        if(k>10){ 
        flag=1; break; }
      
      }
      if(k<10)
       flag=1;
      
      for(i=0;i<n;i++)
       if(str[i]!=' '){
        st=i;
        break; }
        
      for(i=n-1;i>=0;i--)
       if(str[i]!=' '){
        en=i;
        break; }
      
      memset(b,0,80);  
      
      for(i=st;i<=en;i++)
       b[i-st]=str[i];    
       
      
      
      
      if(flag==1){
       printf("%s is incorrect.\n",b);
       continue; }
                             
     
      sum=a[0];
      for(i=1;i<k;i++){
       a[i]=a[i]+a[i-1];
       sum=sum+a[i]; }
      
      if(sum%11==0)
       printf("%s is correct.\n",b);
      else 
       printf("%s is incorrect.\n",b);
}

return 0;
}
       
