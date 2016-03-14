#include<iostream>
#include<math.h>
using namespace std;

long long i,k,n;
int isprime(long long n){
 
  if(n==2||n==1) return 2;
  if(n%2==0)
   return 1;
  
   int flag=0;    
   for(int i=3;i*i<=n;i=i+2)
    if(n%i==0){
     flag=1;
     break; }
     
    if(flag==1)
     return 1;
    else
     return 2;   

     
}    
 
       
  
int main(){
    
    while(cin>>n){
     
     if(n==0) break;
     if(n==11||n==23||n==29){
      printf("Given number is prime. But, NO perfect number is available.\n");
      continue;}
     if(isprime(n)==1)
       printf("Given number is NOT prime! NO perfect number is available.\n");
     else{
      k= pow(2,(n-1));
      k=k*(pow(2,n)-1);
      
      cout<<"Perfect: "<<k<<"!"<<endl;
      }
        
          
}

return 0;
}       
           
