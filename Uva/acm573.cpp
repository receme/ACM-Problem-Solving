#include<stdio.h>

double m,n,a,b,c,sum,f;
int d;
int main(){
     
    while(scanf("%lf %lf %lf %lf",&m,&a,&b,&c)==4){
       if(m==0&&a==0&&b==0&&c==0) 
        break;
       sum=0;
       d=0;
       f=c/100.0; n=(double)a*f;
       
       for(;;){
          d++;
          sum=sum+a;
                          
          if(sum>m){
           printf("success on day %d\n",d);
           break; }
                 
         sum=sum-b;
         
                       
         
         if(sum<0){
           printf("failure on day %d\n",d);
           break; }
       
       
       a=a-n;
       if(a<0)a=0;

      }
      
}

return 0;
}    
          
               
