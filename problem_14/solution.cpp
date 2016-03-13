#include<stdio.h>
long d,x,y,flag;
void Extended_Euclid(long a, long b){
long x1;
if(b>a){
x1=a; 
a=b;
b=x1;
}
if(b==0){
d=a;
x=1;
y=0;
return;
}
Extended_Euclid(b,a%b);
d = d;
x1 = x-(a/b) * y;
x = y;
y = x1;
}
int main(){
long a,b,t; 
while(scanf("%ld %ld", &a, &b)==2){
if(a==0&&b==0)break;
if(a>b)
 flag=1;
else
 flag=0;

Extended_Euclid(a,b);
if(a==b)
 if(x<y){
 t=x;x=y;y=t; }
if(flag==1) 
printf("%ld %ld %ld\n",x,y,d);
else
printf("%ld %ld %ld\n",y,x,d);
 }

 return 0;
}