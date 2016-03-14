#include<stdio.h>
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int i,j,n,a[101],b[101],sum1,d,r;

int main(){
    
    while(scanf("%d %d %d",&n,&d,&r)==3){
          
          if(n==0&&d==0&&r==0)
           break;           
       
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
      
      sort(a,a+n);
      
      for(i=0;i<n;i++)
       scanf("%d",&b[i]);
      
      sort(b,b+n,greater<int>()); 
    sum1=0; 
    for(i=0;i<n;i++)
     if(a[i]+b[i]>d){
      j=a[i]+b[i]-d;
      sum1=sum1+j*r; }               

    printf("%d\n",sum1);
}     
     

return 0;
}
        
