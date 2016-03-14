#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;


long i,j,k,l,m,n,p,sum;
long a[100000],b[100000],c[100000];

void dec_to_bin(long n){

  k=0;
  
  while(n!=0){
   a[k]=n%2;
   n=n/2;
   k++; }
  
}

long bin_to_dec(long ar[]){
    
 sum=0;       
 j=0; 
 for(i=k-1;i>=0;i--){
   sum=sum+ar[i]*pow(2,j);
   j++;
  }  
 
return sum;
}


int main(){
    
    
 while(scanf("%ld",&n)==1){
                           
 
  if(n==0) break;
  
 memset(b,0,100000);
 memset(c,0,100000); 
  
  dec_to_bin(n);
  
//reverse(a,a+k);

  /*for(i=0;i<k;i++)
   printf("%ld",a[i]);
   printf("\n");*/
 p=1;
 m=0;
 for(i=0;i<k;i++){
  if(a[i]==0){
   b[m]=a[i];
   m++;
   }
  else
   if(p==0||p%2==0){
    b[m]=0;
    m++;
    p++; }
   else {
    b[m]=1;
    m++;
    p++;
     }
}     
     
 p=1;
 m=0;
 for(i=0;i<k;i++){
  if(a[i]==0){
   b[m]=a[i];
   m++;
   }
  else
   if(p==0||p%2==0){
    c[m]=1;
    m++;
    p++; }
   else {
    c[m]=0;
    m++;
    p++;
     }
}    
reverse(b,b+k);
reverse(c,c+k);

/*for(i=0;i<k;i++)
 printf("%ld",b[i]);

printf("\n");

for(i=0;i<k;i++)
 printf("%ld",c[i]);
 
printf("\n");*/
 
   
m=bin_to_dec(b);
p=bin_to_dec(c);


 printf("%ld %ld\n",m,p);


    
   
}

return 0;
}
  
  
  
