#include<stdio.h>

long a[10],i,j,k,n,m;

int main(){
    
    scanf("%ld",&n);
    
    for(i=0;i<n;i++){
    
     scanf("%ld %ld %ld",&a[0],&a[1],&a[2]);
     
    for(j=0;j<3;j++)
     for(k=0;k<2;k++)
      if(a[k]>a[k+1]){
        m=a[k];
        a[k]=a[k+1];
        a[k+1]=m;}
        
    if(a[0]+a[1]>a[2])
     printf("OK\n");
    else
     printf("Wrong!!\n");
}

return 0;
}   
