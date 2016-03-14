#include<stdio.h>

int main(){

int b[5];
float h,m;
char a[5];

while(gets(a)){

b[0]=a[0]-48;

if(a[1]!=':'){
 b[1]=a[1]-48;
 b[2]=a[3]-48;
 b[3]=a[4]-48;
 h=b[0]*10+b[1];
 m=b[2]*10+b[3];
 }

else{
 b[1]=a[2]-48;
 b[2]=a[3]-48;
 h=b[0];
 m=b[1]*10+b[2];}

 if(h==0)break;


h=h*30+(m/60)*30;
m=m*6;
h=h-m;
if(h<0)
 h=-h;
if(h>180) h=360-h;

printf("%.3f\n",h);
}
return 0;

}

