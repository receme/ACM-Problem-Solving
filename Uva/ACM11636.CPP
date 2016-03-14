#include<stdio.h>

int main(){

int i,n;
int a[16]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384};


a[15]=1;
while(scanf("%d",&n)){
 if(n<0)
  break;

  i=0;
  for(;;){

   if(a[i]>=n)
    break;
     i++;
      }

  printf("Case %d: %d\n",a[15],i);
  a[15]++;

  }

  return 0;
  }

