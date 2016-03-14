#include<stdio.h>
#include<string.h>


char a[200];
int b[200],i,j,k,m,n,l;


int main(){
    
    while(gets(a)){
     
     l=0;
     if(strcmp(a,"")==0){
      printf("\n");
      l=1;}
      
     n=strlen(a);
    
     b[0]=0;
     k=1;
     m=0;
     for(i=0;i<n;i++){
              
              
              
        if(a[i]>=48&&a[i]<=57){
           b[k]=b[k-1]+(a[i]-48);
           m=b[k];
           k++; 
          
           continue;}   
                 
        if(a[i]==' '||a[i]=='b'){
          for(j=0;j<m;j++)
           printf(" ");
           k=1;
           m=0;
          continue;     }  
           
            
        
        
        if(a[i]=='*'){
          for(j=0;j<m;j++)
            printf("*");  
           k=1;m=0;
           continue;
           }
          
          if(a[i]=='!'){
          printf("\n");
          continue;
          } 
         
           for(j=0;j<m;j++)
            printf("%c",a[i]);
           k=1;m=0;
           
             
        
}

if(l==0)
printf("\n");

}

return 0;
}
     
                          
                       
                                     
