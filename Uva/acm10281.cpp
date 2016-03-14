#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char a[100],str[100],*st;
long long i,k,n,sum,b[10],c[10],tim,f,speed;
double km;

long long time_in_second(long long d[],long long e[])
{
    
    long long sum=0;
      
    for(;;){
      if(e[0]==d[0]&&e[1]==d[1]&&e[2]==d[2])
       return(sum);    
     e[2]++;
     if(e[2]==60){
      e[1]++;
      e[2]=0; } 
     if(e[1]==60){
      e[0]++;
      e[1]=0; }
     
     
     sum++;  
   
   }        
    
}


int main(){
    f=0;
    km=0;
    while(gets(a)){
    n=strlen(a);
    if(f==0&&n==8){
     printf("%s 0.00 km\n",a);
     continue; }
    
    
    strcpy(str,a); 
    k=0;  
    st=strtok(a," :");
    while(st!=NULL){
     b[k]=atol(st);
     k++;
     st=strtok(NULL," :");
      } 
   if(f==1){
    tim=time_in_second(b,c);         
    km=km+(speed/3600.0)*tim;  } 
      
   if(k==4) 
    speed=b[3];
      
   if(f==0){
    f=1;
    for(i=0;i<3;i++) 
    c[i]=b[i];
    continue; }
   
   tim=time_in_second(b,c);    
  
   km=km+(speed/3600.0)*tim;
  if(k==3){    
    printf("%s %.2lf km\n",str,km);
}        
  for(i=0;i<3;i++) 
    c[i]=b[i];
               
      
    
    
}

return 0;
} 
