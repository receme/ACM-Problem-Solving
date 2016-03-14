#include<stdio.h>

double a,b,c;
double i,j,m,n;

int main(){
    
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
       i=a/(a+b);
       j=b/(a+b-c-1);
       m=i*j;
       
       i=b/(a+b);
       j=(b-1)/(a+b-c-1);
       n=i*j;
       m=m+n;
       
       printf("%.5lf\n",m);
       }
return 0;
}
    
