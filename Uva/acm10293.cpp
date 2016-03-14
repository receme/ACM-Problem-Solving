#include<stdio.h>
#include<string.h>
#include<algorithm>

char a[100];
int i,k,n,b[40],flag,l=0;

int main(){
   
    flag=0;
    std::fill( b,b+31,0);
    
    while(gets(a)){
     
     
     n=strlen(a); 
     
     if(a[0]=='#'){
      
      for(i=1;i<=30;i++)        
        if(b[i]!=0)
         printf("%d %d\n",i,b[i]);
       
       printf("\n");  
    std::fill( b,b+31,0);
     l=1;
     continue;
     
     }
     
     
    if(flag==0)
     k=0;
     
     for(i=0;i<n;i++){
      flag=0;
      if(a[i]==39||a[i]=='-'){
       flag=1;                       
       continue;}               
      if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
       k++;
       continue;}
       
      b[k]++;
      k=0;
      }
      if(flag==0)
       b[k]++;
      
         
                   
}

return 0;
}
     
     
                   
