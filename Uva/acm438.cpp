#include<stdio.h>
#include<math.h>

double x1,z1,x2,z2,x3,z3,a,b,c,r,L,s,p;

int main(){
    
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&z1,&x2,&z2,&x3,&z3)==6){
                     
     a=sqrt((x1-x2)*(x1-x2)+(z1-z2)*(z1-z2));  
     b=sqrt((x2-x3)*(x2-x3)+(z2-z3)*(z2-z3));
     c=sqrt((x3-x1)*(x3-x1)+(z3-z1)*(z3-z1));
     
     s=(a+b+c)/2;
     
     L =sqrt(s*(s-a)*(s-b)*(s-c));
     
     r=(a*b*c)/(4*L);
     
     p=2*acos(0.0);
     
     a=2*p*r;
     
     printf("%.2lf\n",a);
     
}

return 0;
}
