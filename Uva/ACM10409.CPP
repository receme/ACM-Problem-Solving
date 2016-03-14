
#include<stdio.h>

int main(){
int j,m,t,b,n,s,e,w,temp;

char a[2000][10];

while((scanf("%d",&m))==1){
 if(m==0)break;
t=1;b=6;n=2;s=5;e=4;w=3;
for(j=0;j<m;j++)
 scanf("%s",a[j]);
for(j=0;j<m;j++){

 if(a[j][0]=='n'){
    temp=t;
    t=s;s=b;b=n; n=temp; }

  if(a[j][0]=='s'){
    temp=t;
    t=n;n=b;b=s; s=temp;}

  if(a[j][0]=='w'){
    temp=t;
    t=e;e=b;b=w; w=temp;}

  if(a[j][0]=='e'){
   temp=t;
   t=w;w=b;b=e; e=temp; }

  }

 printf("%d\n",t);
  }
  return 0;

  }

