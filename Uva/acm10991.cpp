#include<stdio.h>
#include<math.h>

double r1,r2,r3,a,b,c,A,B,C,k,area1,area2,area3,s,T;
long cas,l;
int main(){
    scanf("%ld",&cas);
    for(l=0;l<cas;l++){
    scanf("%lf %lf %lf",&r1,&r2,&r3);                    
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s=(a+b+c)/2;
        
        T= sqrt(s*(s-a)*(s-b)*(s-c));
        
        k=(b*b+c*c-a*a)/(2*b*c);
        A=acos(k);
       // A=(A*180)/3.1416;
        //printf("%lf\n",A);
        
        area1= (r3*r3*A)/2;
        
        
        k=(a*a+c*c-b*b)/(2*a*c);
        B=acos(k);
       // B=(B*180)/3.1416;
        //printf("%lf\n",B);
        area2= (r1*r1*B)/2; 
        k=(a*a+b*b-c*c)/(2*a*b);
        C=acos(k);
        //C=(C*180)/3.1416;
        //printf("%lf\n",C);        

        area3= (r2*r2*C)/2;

       T=T-(area1+area2+area3);
       
      printf("%lf\n",T);
      }


return 0;
}            
                     
