#include<stdio.h>


long j,k,m,n,l,cas;

int main(){
    scanf("%ld",&cas);

for(l=0;l<cas;l++){

 scanf("%ld %ld",&m,&n);
 
 m=m-2;n=n-2;
 
 k=m/3;
 if(m%3!=0)
  k++;
  
 j=n/3;
 if(n%3!=0)
  j++;
 
 printf("%ld\n",(j*k));
 
}

return 0;
}
 
 
 
    
