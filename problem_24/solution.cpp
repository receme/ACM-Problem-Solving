#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

int x[10],co,a[800][10],p,l,flag,cas,c,m,mm,w[10][10],sm,sum;

bool place(int k,int i)
{
    for(int j=1;j<k;j++)
     if(x[j]==i||abs(x[j]-i)==abs(j-k))
       return false;
      
    return true;
}

void NQueen(int k,int n)
{ 
     for(int i=1;i<=n;i++)
     {
       if(place(k,i))
       {
         x[k]=i;
      
         if(k==n)
         {                      
            for(l=1;l<=n;l++)
             a[p][l]=x[l];
             p++;   
                 
         } 
         
         else
          NQueen(k+1,n);
       }
     }
       
}

int main(){
   
 scanf("%d",&cas);
 
 for(c=0;c<cas;c++){
  
 
  for(int q=0;q<8;q++)
   for(int j=0;j<8;j++)
    scanf("%d",&w[q][j]);
 
 
 
 
 p=0;
 NQueen(1,8); 
 
 sm=0;

 for(int i=0;i<p;i++){
   sum=0;
  for(int j=1;j<=8;j++){ 
 
   sum=sum+w[j-1][a[i][j]-1]; 
}
   
  
     
 if(sum>sm)
  sm=sum;
   }
 
  printf("%5d\n",sm);
  
}
return 0;
}
