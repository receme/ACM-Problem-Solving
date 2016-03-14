#include<stdio.h>
#include<math.h>

int main(){

double i,j,k,n,l,a,b,c;
double s,area;
while((scanf("%lf %lf %lf",&a,&b,&c))!=EOF){

s=(a+b+c)*0.5;
n=s*(s-a)*(s-b)*(s-c);
if(n<=0){
 printf("-1.000\n");
 continue;}

l=sqrt(n);

area=(4*l)/3 ;

printf("%.3lf\n",area); }

return 0;
}
