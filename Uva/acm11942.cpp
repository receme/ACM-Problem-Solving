#include<stdio.h>

int a[11],i,j,k,flag,f1;

int main(){
    
    scanf("%d",&k);
    
printf("Lumberjacks:\n");    
for(j=0;j<k;j++){

 f1=0;
 flag=0;
 
 for(i=0;i<10;i++){
  scanf("%d",&a[i]);
  if(i==0)
   continue;
  else if(i==1){
     
    if(a[i]>a[i-1])
     flag=1;
    else
     flag=2;
    
   continue;
    
  }
  
  if(flag==1&&f1==0) {   
    if(a[i]<a[i-1])
     f1=1;}
  else if(flag==2&&f1==0)
   if(a[i]>a[i-1])
    f1=1;
}   
    
 if(f1==0)
  printf("Ordered\n");
 else
  printf("Unordered\n");   
  
}    
  

return 0;
}
