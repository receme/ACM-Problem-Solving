#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

int x[10],co,a[800][10],p,l,flag,cas,c,m,mm;

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
          flag=0;       
          if(x[mm]==m)
             flag=1;
             
           
          if(flag==1){
            for(l=1;l<=n;l++)
             a[p][l]=x[l];
             p++; }  
                 
         } 
         
         else
          NQueen(k+1,n);
       }
     }
       
}

int main(){
   
 scanf("%d",&cas);
 
 for(c=0;c<cas;c++){
  
 for(int i=0;i<800;i++)
  memset(a[i],0,10); 
  memset(x,0,10);
  scanf("%d %d",&m,&mm);
 
 p=0;
 NQueen(1,4); 
 
 printf("SOLN       COLUMN\n");
 printf(" #      1 2 3 4 5 6 7 8\n\n");
     
 
 for(int i=0;i<p;i++){
   printf("%2d      ",i+1);
  for(int j=1;j<=8;j++){
   printf("%d",a[i][j]);
   if(j!=8)
    printf(" "); }
 
 printf("\n"); }
 
 if(c!=cas-1)
  printf("\n");
  
}
return 0;
}
