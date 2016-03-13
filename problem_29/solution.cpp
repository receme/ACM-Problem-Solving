#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char a[100],b[100],c[100],ch,str[10000000][90];
int i,j,k,n,p,l,count1,r,flag,t,q;

int main(){
    
    while(scanf("%s",a)==1){
      n=strlen(a);
      strcpy(b,a);
      sort(b,b+n);
      ch=b[0];
      count1=1;
      
      for(i=1;i<n;i++)
       if(b[i]!=ch){
         count1++;
         ch=b[i];
         }
    
   t=0;
    r=1;
   for(;;){ 
    if(r==n) break;     
    
    for(i=0;i<n-r;i=i+1){
     memset(b,0,100);
     memset(c,0,100);
     
     k=0;
     for(j=i;j<i+r+1;j++){
      b[k]=a[j];
      k++; } 
      l=0;
     for(j=k-1;j>=0;j--){
      c[l]=b[j];
      l++;}   
        
     flag=1;
     if(strcmp(b,c)==0){
      flag=0;                  
      for(q=0;q<t;q++)
       if(strcmp(b,str[q])==0){
        flag=1;
        break; }
        }   
      if(flag==0){
        strcpy(str[t],b);
        t++;                              
       count1++;
     
     }
       
  
} 
 r++;
}

printf("The string '%s' contains %d palindromes.\n",a,count1);

}

return 0;
}
