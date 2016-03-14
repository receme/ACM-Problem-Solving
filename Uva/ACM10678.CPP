#include<stdio.h>
#include<math.h>

int main(){

int i,n;
double d,l,area;
double a,b,pi;
pi=2*acos(0);


scanf("%d",&n);

for(i=0;i<n;i++){

   scanf("%lf %lf",&d,&l);
    
    a=l/2;
    b=sqrtl(((l/2)*(l/2))-((d/2)*(d/2)));

    area=pi*a*b;

    printf("%.3lf\n",area);
    }


return 0;}


