#include<stdio.h>

long i,n,a[30];

int main(){
    a[0]=1;
    a[2]=3;
    
    for(i=4;i<=30;i=i+2)
     a[i]=a[i-2]*4-a[i-4];
    
  
     
     
while(scanf("%ld",&n)==1){
    if(n==-1) break;
    if(n%2!=0)
     printf("0\n");
    else
    printf("%ld\n",a[n]);
}                       

return 0;
}
     
