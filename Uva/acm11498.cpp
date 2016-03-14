#include<stdio.h>

long i,m,n,x,y,t;

int main(){
    
    while(scanf("%ld",&t)==1){
      if(t==0) break;
       scanf("%ld %ld",&m,&n);
       
       for(i=0;i<t;i++){
        scanf("%ld %ld",&x,&y);
        
        if(x==m||x==(-m)||y==n||y==(-n)){
         printf("divisa\n");
         continue; }
         
         
        if(x>m&&y>n){
         printf("NE\n");
         continue; } 
         
        if(x>m&&y<n){
         printf("SE\n");
         continue; } 
        
        if(x<m&&y<n){
         printf("SO\n");
         continue; }
        
        if(x<m&&y>n){
         printf("NO\n");
         continue; }
         }  
}

return 0;
}      
