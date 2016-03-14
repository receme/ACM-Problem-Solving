#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

long long N,p,l;
int m,flag,kti,lkh,hjr,sht,kuti,lakh,hajar,shata,khali,cas=1,i,n;
char a[20];
int main(){
    
    while(scanf("%lld",&N)==1){
     kti=lkh=hjr=sht=kuti=lakh=hajar=shata=khali=0;
    sprintf(a,"%lld",N);
    n=strlen(a);
    flag=0;
    
    printf("%4d. ",cas++);
    if(N==0){
     printf("0\n");
     continue; } 
    if(n>9){
     p=N/1000000000;       
     N=N%1000000000;
     flag=1; }
    
    
    if(flag==1){
     sprintf(a,"%lld",p);
     l=strlen(a);
     n=n-l;
   
     if(l==6){
       m=p/100000;
       p=p%100000;
       if(m!=0)
        kti=m;
       l--; }
     if(l==5||l==4){
       m=p/1000;
       p=p%1000;
       if(m!=0)
       lkh=m;
       if(l==4)
        l=l-1;
       else 
        l=l-2;
        }
     if(l==3||l==2){
       m=p/10;
       p=p%10;
       if(m!=0)
       hjr=m;
      if(l==2)
       l=l-1;
      else 
       l=l-2;
       }
     if(l==1){
       m=p;
       if(m!=0)
        sht=m;
        }    
     }  
    
    if(n>=8){
     m=N/10000000;
     N=N%10000000;
    if(m!=0)    
     kuti=m;
     if(n==8)
      n=n-1;
     else 
      n=n-2;
     } 
    if(n>=6){
     m=N/100000;
     N=N%100000;
     if(m!=0)
      lakh=m;
     if(n==6)
      n=n-1;
     else 
      n=n-2;
    } 
    if(n>=4){
     m=N/1000;
     N=N%1000;
     if(m!=0)
      hajar=m;
     if(n==4)
      n=n-1;
     else 
      n=n-2;
    }
    if(n==3){
     m=N/100;
     N=N%100;
     if(m!=0)
      shata=m;
     n=n-2; 
      }
    if(n>=1){
     if(N!=0)
      khali=N; 
   }
      
   i=0;        
   if(kti!=0){
    printf("%d kuti",kti);   
    i=1; }
   if(lkh!=0){
    if(i==1)
     printf(" ");
    printf("%d lakh",lkh);
    i=1; }
   if(hjr!=0){
    if(i==1)
     printf(" ");
    printf("%d hajar",hjr);
    i=1; }
   if(sht!=0){
    if(i==1)
     printf(" ");
    printf("%d shata",sht);
    i=1; } 
    if(i==1)
     printf(" ");
    
    if(kuti!=0){
     printf("%d kuti",kuti);
     i=1;}
    else if(i==1){
     printf("kuti");
     i=1; } 
      
   if(lakh!=0){
    if(i==1)
     printf(" ");
    printf("%d lakh",lakh);
    i=1; }
   if(hajar!=0){
    if(i==1)
     printf(" ");
    printf("%d hajar",hajar);
    i=1; } 
   if(shata!=0){
    if(i==1)
     printf(" ");
    printf("%d shata",shata);
    i=1; }   
   if(khali!=0){
    if(i==1)
     printf(" ");
    printf("%d",khali);
    i=1; }   
  printf("\n");

}

return 0;
}
 
