#include<stdio.h>
#include<string.h>
#include<math.h>

char a[10000000],b[10000000];
int s[10000000];

int i,j,k,n,sum,p,l;

int main(){
   gets(a);
   l=0;
    while(gets(a)){
     if(a[0]=='_')
     break;
    n=strlen(a);
    k=0;
    for(i=0;i<n-1;i++){
     if(a[i]=='o'){
      s[k]=1;
      k++; }
     else if(a[i]==' '){
       s[k]=0;
       k++;}
       }
       
    
   sum=0; p=0;
   for(i=k-1;i>=0;i--){
     sum=sum+s[i]*pow(2,p);
     p++; }                  

b[l]=sum;
l++;

}

for(i=0;i<l;i++)
 printf("%c",b[i]);
 
 

return 0;
}        
       
