#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
long r,w[100],d,x[100],b[100][30],co[100],flag,p,k,j;

 
void subset(long cs,long k,long r)
{ 
   long i;
   x[k]=1;
   if(cs+w[k]==d)
    {
       flag=1;
       p++;
       r=0;
       for(i=0; i<=k; i++)
       {
         if(x[i]==1){
         b[p][r]=w[i];
         r++; }
        
         co[p]=r;
        } 
     }
     
  else if(cs+w[k]+w[k+1] <=d)
        subset(cs+w[k],k+1,r-w[k]);
    if((cs+r-w[k]>=d)&&(cs+w[k+1])<=d)
    {              
      x[k]=0;
      subset(cs,k+1,r-w[k]);
    }
}
 
int main()
{
    long sum,i,n;
   
    while(scanf("%ld",&d)==1){
    
    scanf("%ld",&n);
    memset(w,0,100);
    memset(x,0,100);
    
    for(i=0;i<100;i++)
     memset(b[i],0,20);
    sum=0;
    for(i=0; i<n; i++){
    scanf("%ld",&w[i]);
    sum=sum+w[i]; } 
    p=-1;
    sort(w,w+n);
    
    if(sum <=d)
    {
       for(long q=0;q<n;q++)
        printf("%ld ",w[q]);
        printf("sum:%ld\n",sum); 
        continue; 
    }  
    
    
   
    flag=0;
    
    for(;;){
    subset(0,0,sum);
    
    
    if(flag==0)
     d=d-1;
    else
     break; 
    } 
    k=co[0];
    j=0;
    for(i=1;i<p;i++)
      if(co[i]>k){
       k=co[i];
       j=i; }
    
  for(i=0;i<co[j];i++)
    printf("%d ",b[j][i]);     
    
   
    
    printf("sum:%ld\n",d);
}   
   
    return 0;
}
