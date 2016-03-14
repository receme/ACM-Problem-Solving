#include<stdio.h>


int i,j,n,sum,b[1000001];

int main(){
   
     
    printf("1\n");
       
    i=1;
    while(i<=1000000){
     n=i;
     sum=0;
     while(n!=0)
      {
      sum=sum+(n%10);
      n=n/10;
      }
       
     
     j=i+sum;
         
     b[j]=1;
     ++i;
     }
     
     i=3;
   while(i<=1000000){
      if(b[i]==0)
        printf("%d\n",i); 
     ++i;
     } 
      
          

return 0;
}

