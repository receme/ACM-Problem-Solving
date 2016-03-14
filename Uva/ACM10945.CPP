#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    
    char a[200000],b[200000];
    char c[5]="DONE";
    int i,j,k,n,m,p,l;
    
    while(gets(a)){
      j=strcmp(a,c);
      if(j==0) break;
       
                   
      n=strlen(a);
      
      for(i=0;i<n;i++)
        b[i]=toupper(a[i]);
        
   
      k=0;
      for(i=0;i<n;i++)
        if(b[i]>=65&&b[i]<=90){
         a[k]=b[i];
         k++; }
         
    
        j=0;
       for(i=k-1;i>=0;i--){
        b[j]=a[i]; 
        j++; }
       j=0;
       for(i=0;i<k;i++) 
        if(a[i]!=b[i]){
         j=1;
         break; }       
       
       if(j==0)
        printf("You won't be eaten!\n");
       else
        printf("Uh oh..\n"); 
 
        
        }
        
        return 0;
        }
        
