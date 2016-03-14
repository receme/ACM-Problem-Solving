#include<stdio.h>

long a[100000002],b[20];
long i,j,k,m,n,r;
int main(){
    
    r=0;
    
    for(i=1;;i++){
          
     n=i;k=0;
     while(n!=0){
      b[k]=n%10;
      n=n/10;
      k++;
       }
      
    
     for(m=k-1;m>=0;m--){
       a[r]=b[m];
       r++; 
       if(r==100000000)
        goto x; 
        } 
      

}   
     
 x:
 while(scanf("%ld",&n)==1){
 
  printf("%ld\n",a[n-1]);
}
    
    
    return 0;
}
