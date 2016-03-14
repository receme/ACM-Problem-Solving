#include<stdio.h>

int cas=1,x[100],m2,z;


bool isprime(int m2){
 
  if(m2==1||m2==2)
   return true;
  
  if(m2%2==0)
   return false;
   
  for(int t=3;t*t<=m2;t+=2)
   if(m2%t==0)
    return false;
 
 return true;
} 

bool place(int k,int i)               
{ 
      
    for(int j=1;j<k;j++)
     if(x[j]==i)
      return false;
    
     if(!(isprime(x[k-1]+i)))
      return false;        
    
     if(k==z)
      if(!(isprime(x[1]+i)))
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
         if(x[1]!=1) break;   
        if(k==n)
        {            
                
            
          for(int l=1;l<=n;l++){
           printf("%d",x[l]);
           if(l!=n)
            printf(" ");            
           }
           printf("\n");
                   
          }
                  
         else{
                       
          NQueen(k+1,n); }
       }
     }
     
     }

int main(){
   
   
  
 while(scanf("%d",&z)==1){
 
 if(cas!=1)
  printf("\n");
 printf("Case %d:\n",cas);
 NQueen(1,z); 
 
 
 cas++;
}

return 0;
}
