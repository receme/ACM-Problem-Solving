#include<stdio.h>
#include<string.h>

char a[20];
int n,i,k;

int main(){
    
    scanf("%d",&n);
    
   for(i=0;i<n;i++)
   {
      scanf("%s",a);             
   
   k=strlen(a);
   
   if(k==5)
    printf("3\n");
   else{
    int co=0;    
      if(a[0]=='o')
       co++;
      if(a[1]=='n')
       co++;
      if(a[2]=='e')
       co++;
      
      if(co>=2)
       printf("1\n");
      else
       printf("2\n");   
      } 
   
   } 
   
return 0;
}   
