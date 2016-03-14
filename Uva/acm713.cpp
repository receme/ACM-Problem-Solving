
#include<stdio.h>
#include<string.h>
long big,i,j,k,m,n,c[1000],d[1000],e[1000],f[1000],flag,l,sum[1000],carry,r,s,cas;
char g[1000],h[1000],a[1000],b[1000];

int main(){
    
    scanf("%ld",&cas);
    for(l=0;l<cas;l++){
     scanf("%s %s",g,h);
     m=strlen(g);
     n=strlen(h);
   j=0;
   for(i=m-1;i>=0;i--){
     a[j]=g[i];
     j++; }
   k=0;
   for(i=n-1;i>=0;i--){
     b[k]=h[i];
     k++; } 
   m=j; n=k; 
              
     flag=0;k=0;
     for(i=0;i<m;i++){
       if(flag==0){
       if(a[i]=='0')
        continue;}
        flag=1;
        c[k]=a[i]-48;;
        k++;
        }
    flag=0;j=0;
     for(i=0;i<n;i++){
       if(flag==0){
       if(b[i]=='0')
        continue;}
       flag=1;
        d[j]=b[i]-48;;
        j++;
        }    
   r=0;
  for(i=k-1;i>=0;i--){
    e[r]=c[i];
    r++;}
  s=0;
  for(i=j-1;i>=0;i--){
    f[s]=d[i];
    s++; }
  if(r>=s){
    big=r;      
   for(i=s;i<r;i++)
    f[i]=0;
}

  else if(s>r){
    big=s;
    for(i=r;i<s;i++)
    e[i]=0;
}
 
 carry=0;          
   for(i=0;i<big;i++){
       
       sum[i]=e[i]+f[i]+carry;
         if(sum[i]>9)
         carry=sum[i]/10;
         else
          carry=0;
         sum[i]=sum[i]%10; 
         
         }
         if(carry!=0){
          sum[big]=carry;
          big++;}
flag=0;
for(i=0;i<big;i++){
      if(flag==0)
       if(sum[i]==0)
        continue;
        flag=1;             
      printf("%ld",sum[i]); }
      printf("\n");

}
return 0;
}




