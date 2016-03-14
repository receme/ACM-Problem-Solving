#include<stdio.h>
#include<string.h>
#include<math.h>

long i,k,n,l,cas,sum,sum1;
char a[31],b[31];

long GCD(long a,long b) {
while (b > 0) {
a = a % b;
a ^= b; b ^= a; a ^= b; } return a;
}

int main(){
    
    scanf("%ld",&cas);
    
    for(l=0;l<cas;l++){
       
       scanf("%s %s",a,b);
       
       n=strlen(a);
       
       sum=0;
       k=0;
       
       for(i=n-1;i>=0;i--){
        sum=sum+(a[i]-48)*pow(2,k);
        k++;
        }
       
      n=strlen(b);
       
       sum1=0;
       k=0;
      
       for(i=n-1;i>=0;i--){
        sum1=sum1+(b[i]-48)*pow(2,k);
        k++;
        }                 
    
    if(GCD(sum,sum1)==1)
     printf("Pair #%d: Love is not all you need!\n",l+1);
    else
     printf("Pair #%d: All you need is love!\n",l+1);
     
     
     }
     
return 0;
     
}
