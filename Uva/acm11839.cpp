#include<stdio.h>

int a[7],i,n,count,l;
char ch;
int main(){
    
    while(scanf("%d",&n)==1){
     if(n==0)break;
     
    for(l=0;l<n;l++){
                   
      for(i=0;i<5;i++)
       scanf("%d",&a[i]);
       
     
     count=0;
     for(i=0;i<5;i++){
       if(a[i]<=127){
        count++;
        ch=i+65;
        }
       
       if(count>1)
        break;
        }
     if(count==0){
       printf("*\n");
       continue; }              
     if(count>1)
      printf("*\n");
     else
      printf("%c\n",ch);
      
}           
 
}

return 0;
}
           
       
        
