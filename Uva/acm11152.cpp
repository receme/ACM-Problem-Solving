#include<stdio.h>
#include<math.h>

double a,b,c,p,S,R,r,S_red,S_blue,S_yellow,PI;

int main(){
    PI=2*acos(0.0);    
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
      
               
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    R = (a*b*c)/(4*S);
    r = S/p;
    S_red = (PI*r*r);
    S_blue = S-S_red;
    S_yellow = (PI*R*R)-S;
    
    printf("%.4lf %.4lf %.4lf\n",S_yellow,S_blue,S_red);
}

return 0;
}
    
        
        
