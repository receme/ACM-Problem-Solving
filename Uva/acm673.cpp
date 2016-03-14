#include<stdio.h>
#include<string.h>

char a[200];
int i,j,m,l,n,flag;

int main(){
    
    scanf("%d",&m);
    getchar();
    for(l=0;l<m;l++){
     
     gets(a);
     
     n=strlen(a);
     if(n==0){
       printf("Yes\n");
      continue; }       
     if(n%2!=0){
      printf("No\n");
      continue; }
    i=0; 
     for(;i<n;i++){
         flag=0;
         
         if(a[i]==')')
           if(a[i-1]!='('){
              flag=1;
              break; }
           else{
             for(j=i+1;j<n;j++)
              a[j-2]=a[j];
              n=n-2;
              i=0;
              }
         if(a[i]==']')
           if(a[i-1]!='['){
              flag=1;
              break; }
           else{
             for(j=i+1;j<n;j++)
              a[j-2]=a[j];
              n=n-2;
              i=0;
              }
              
         }
        if(n!=0){
         printf("No\n");
         continue; }        
         
        if(flag==1)
         printf("No\n");
        else
         printf("Yes\n");
         }
   
    return 0;
} 
                                           
                        
       
        
