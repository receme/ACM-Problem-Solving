#include<stdio.h>
#include<stdlib.h>
float a1,b1,c1,a2,b2,c2,k;
float x,y;
int main(){
        while(scanf("%f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2)==6){
    
      if(a1==0&&b1==0&&c1==0&&a2==0&&b2==0&&c2==0) break;
      if(a1==0&&a2==0||b1==0&&b2==0){
      printf("No fixed point exists.\n");
       continue; }                         
                          
      if(a1==0&&b2==0){
         x=c2/a2;
         y=c1/b1; 
         goto x;}
       else if(a2==0&&b1==0){
          x=c1/a1;
          y=c2/b2;
          goto x;}
          
      if((a1!=0&&b1!=0&&a2==0&&b2!=0)||(a1!=0&&b1!=0&&a2!=0&&b2==0)){
     
      goto t;       } 
      
      if(a1==a2&&b1==b2){
       printf("No fixed point exists.\n");
       continue; }                        
      
                                   
      if(a1==b1==a2==b2||(a1==b1==(-a2)==(-b2))||((-a1)==(-b1)==a2==b2)){
       printf("No fixed point exists.\n");
       continue; }
       
      if(a1==(-b1)==b2==(-a2)||(b1==(-a1)==a2==(-b2))){ 
       printf("No fixed point exists.\n");
       continue; }
       
      t: 
                   
      k=b1*b2;
     
      if(k>0)
       x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
      else
       x=(c1*abs(b2)+c2*abs(b1))/(a1*abs(b2)+a2*abs(b1));
      
      if(b1==0){
       y=(c2-(a2*x))/b2;
       goto x; }         
       
       
       y=(c1-(a1*x))/b1;         
       
       
       
       x:      
       printf("The fixed point is at %.2f %.2f.\n",x,y);
       }
return 0;
}  
         
       
    
      
