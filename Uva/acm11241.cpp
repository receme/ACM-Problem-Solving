#include<stdio.h>
#include<math.h>

double t,d,h,l,r,m,n;
int i,j,k,flag;
char ch1[3],ch2[3];


int main(){
    
    while(scanf("%s",ch1)==1){
     if(ch1[0]=='E')
      break;
    
     scanf("%lf %s %lf",&m,ch2,&n);
     
      
      if(ch1[0]=='T'&&ch2[0]=='D'){
       t=m;
       d=n; 
       flag=0;}
      else if(ch1[0]=='D'&&ch2[0]=='T'){
        d=m;
        t=n;
        flag=1; }  
      else if(ch1[0]=='T'&&ch2[0]=='H'){ 
        t=m;
        h=n; 
        flag=2;}
      else if(ch1[0]=='H'&&ch2[0]=='T'){ 
        h=m;
        t=n; 
        flag=3;}  
       else if(ch1[0]=='D'&&ch2[0]=='H'){ 
        d=m;
        h=n; 
        flag=4;}  
       else if(ch1[0]=='H'&&ch2[0]=='D'){ 
        h=m;
        d=n; 
        flag=5;} 
   
   
   
   if(flag==0||flag==1){       
     l = 6.11 * exp(5417.7530 *((1/273.16)-(1/(d+273.16))));  
     r = (0.5555)*(l - 10.0);
     h= t+r;
     if(flag==0)
      printf("%s %.1lf %s %.1lf H %.1lf\n",ch1,t,ch2,d,h);
     else
      printf("%s %.1lf %s %.1lf H %.1lf\n",ch2,t,ch1,d,h);
     }
     
   else if(flag==2||flag==3){
        
      r=h-t;
      l= (r/0.5555)+10.0 ;
      d= (1/((1/273.16)- (log(l/6.11)/5417.7530 ))) - 273.16 ;
      
      if(flag==2)
      printf("%s %.1lf D %.1lf %s %.1lf\n",ch1,t,d,ch2,h);
     else
      printf("%s %.1lf D %.1lf %s %.1lf\n",ch2,t,d,ch1,h);
     }
     
    else if(flag==4||flag==5){
        
      l = 6.11 * exp (5417.7530 * ((1/273.16) - (1/(d+273.16))));
      r = (0.5555)*(l - 10.0);
      t=h-r;      
      if(flag==4)
      printf("T %.1lf %s %.1lf %s %.1lf\n",t,ch1,d,ch2,h);
     else
      printf("T %.1lf %s %.1lf %s %.1lf\n",t,ch2,d,ch1,h);
     }  
        
     
}       
     
     
     return 0;
     }
  
            
             
