#include<stdio.h>
#include<math.h>
#include<string.h>

char a[100];
long long i,j,k,r,m,n,flag,sum,N,co,f1,f2,f3,f4;
double area,x1,x2;


int main(){
    
    while(scanf("%s %lld",a,&r)==2){
    
      if(strcmp(a,"0")==0)
       break;
       
      n=strlen(a);
      
      flag=0;
      for(i=0;i<n;i++) 
        if(a[i]=='^'){
          flag=1;
          k=i;
          break; }
      
      if(flag==0){
       sum=0; j=1;           
       for(i=n-1;i>=0;i--){ 
         sum=sum+(a[i]-48)*j;
         j=j*10; }         
       N=sum;
       }
      else{
       sum=0; j=1;
       for(i=k-1;i>=0;i--){
       sum=sum+(a[i]-48)*j;
         j=j*10; }
       m=sum;
         
       sum=0; j=1;
       for(i=n-1;i>=k+1;i--){
       sum=sum+(a[i]-48)*j;
         j=j*10; } 
       
       n=sum;
      N=m; 
      for(i=0;i<n-1;i++)
       N=N*m;
      
      }
      
      //printf("%ld\n",N);
      
      co=0;
      for(i=0;i<N;i++){
       scanf("%lf %lf",&x1,&x2);
       f1=f2=f3=f4=0;
       
       if(x1*x1+x2*x2<=r*r)
        f1=1;
       
       if((r-x1)*(r-x1)+x2*x2<=r*r)
        f2=1;
       
       if((r-x1)*(r-x1)+(r-x2)*(r-x2)<=r*r)
        f3=1;
        
       if(x1*x1+(r-x2)*(r-x2)<=r*r) 
        f4=1;
        
       if(f1==1&&f2==1&&f3==1&&f4==1)
        co++;    
       
       }    
    
    area= co*r*r/(double)N;
    
    printf("%.5lf\n",area);
       
       
       
      
      
}

return 0;
}
         
           
