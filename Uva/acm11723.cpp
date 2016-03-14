
#include<stdio.h>

int main(){
    
 int i,k,n,m,c=0;
 
 while(scanf("%d %d",&m,&n)==2){
       if(m==0&&n==0) break; 
      c++;
      if(n>=m){
        printf("Case %d: 0\n",c);
        continue; }
               
      k=m-n;
      if(n*26<k){
        printf("Case %d: impossible\n",c);
        continue; }
                  
     i=k/n;
     if(k%n!=0)
      i++;
      
      printf("Case %d: %d\n",c,i);
      }  
      
     return 0;
     } 
                 
