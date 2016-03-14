#include<stdio.h>
#include<stdlib.h>
int cas,i,j,x[100],co,a[10],b[100][10],min,q,lim=1;

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
                       
          co=8;
          for(int l=1;l<=n;l++)
            b[lim][l]=x[l];
          lim++;  
          
          }
     
         
         else{
                       
          NQueen(k+1,n); }
       }
     }
     
      
}



int main(){
 cas=1;  

NQueen(1,8); 

while(scanf("%d",&a[1])==1){
 for(q=2;q<=8;q++)
  scanf("%d",&a[q]);
  
 min=100;
 
 for(i=1;i<=lim;i++){
  co=8;                          
  for(j=1;j<=8;j++)
   if(b[i][j]==a[j])
     co--;
 
   if(co<min)
    min=co;
}
 
 
  
 printf("Case %d: %d\n",cas,min);

 cas++;
}


return 0;
}
