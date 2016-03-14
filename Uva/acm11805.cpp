
#include<stdio.h>

int main(){
    
    int i,j,k,m,n,l,a,b,c;
    
    scanf("%d",&m);
    
    for(l=0;l<m;l++){
   
     scanf("%d %d %d",&a,&b,&c);
     i=0; 
     for(;;){
       if(i==c)
        break;
             
       b=b+1;
       i++;
       if(b==a+1)
        b=1;
             
             }  
             
          printf("Case %d: %d\n",l+1,b);
          }
          
          return 0;
          }        
