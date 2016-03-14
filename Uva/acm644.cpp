#include<stdio.h>
#include<string.h>


char a[20][20];
int i,j,k,m,n,l,p,f1,flag,cas=1;

int main(){
    k=0;
    while(scanf("%s",a[k])==1){
      if(a[k][0]=='9'){
               
         f1=0;     
        for(i=0;i<k-1;i++){
         
         if(f1==1)
          break; 
         n=strlen(a[i]); 
         for(j=i+1;j<k;j++){
           m=strlen(a[j]);
           if(n<m)
            p=n;
           else
            p=m;
            flag=0;
            for(l=0;l<p;l++)
             if(a[i][l]!=a[j][l]){
              flag=1;
              break; }
              
            if(flag==0){
             f1=1;
             break; } 
         }     
                               
        }  
          
          if(f1==0)
           printf("Set %d is immediately decodable\n",cas++);
          else 
           printf("Set %d is not immediately decodable\n",cas++);
        k=0;
        continue;
                        
      }
      
      k++;
      
      }
return 0;
}
