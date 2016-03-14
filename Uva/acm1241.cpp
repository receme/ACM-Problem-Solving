#include<stdio.h>
#include<math.h>
#include<string.h>


int a[2000],b[2000],i,j,k,l,m,n,t,N;


int main()
{
  
  scanf("%d",&t);
  

for(l=0;l<t;l++)
{
 
   scanf("%d %d",&m,&n);
   
   N=pow(2,m);
   //printf("%d",N);
   
   for(i=1;i<=N;i++)
    a[i]=1;
    
   for(i=0;i<n;i++)
   {
    scanf("%d",&k);
    a[k]=0;
   }
   
   int co=0;
   
   for(;;)
   {
     if(N==1)
      break;
     j=1;   
     memset(b,0,2000);  
     for(i=1;i<=N-1;i+=2){
       if(a[i]==0&&a[i+1]==0){
        b[j]=0;
        }
       else
        b[j]=1; 
       j++; 
      if((a[i]==0&&a[i+1]==1)||(a[i]==1&&a[i+1]==0))
       co++; 
       
       
       }
       
      memset(a,0,2000);
      
      for(i=1;i<=N/2;i++)
       a[i]=b[i];      
       
    N=N/2;            
   
   
   
   }
  
  printf("%d\n",co);
  
}

 
return 0;
}
