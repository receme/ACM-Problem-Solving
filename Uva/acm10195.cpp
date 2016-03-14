#include<stdio.h>
#include<math.h>
double a,b,c,s;
int main(){
while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
  if(a==0||b==0||c==0){ 
   printf("The radius of the round table is: 0.000\n");
   continue; }               
s=(a+b+c)/2;a=sqrt((s-a)*(s-b)*(s-c)/s);
printf("The radius of the round table is: %.3lf\n",a);
}

return 0;
} 
