#include<stdio.h>
#include<string.h>

char a[10000000],ch;
long i,j,k,n,ma,cou,flag;

int main(){
    
    while(scanf("%ld",&n)==1){
     if(n==0) break;
      scanf("%s",a);
            
      ma=10000000;
      k=0;
      flag=0;
      cou=0;
      ch=' ';
      j=0;
      for(i=0;i<n;i++){
      if(a[i]=='Z'){
       flag=1;
       break; }
      
      if(a[i]=='.'){
      cou++;
       continue; }
      
      if(j==1){
      if(a[i]!=ch){ 
      
       if(cou<ma)
        ma=cou;
       
        ch=a[i];
        cou=1;
        }
      else{
        
        cou=1;}
        }
      
      
      if(a[i]=='D'||a[i]=='R'){
         j=1;
         ch=a[i];
         
         cou=1;
         continue; }
         
         }
       
       
       if(flag==1){
        printf("0\n");
        continue; }
       printf("%ld\n",ma); 
        
}

return 0;
}    
