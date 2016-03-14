#include<stdio.h>

long i,m,n,l,cas,greater,equal;

int main(){
                                   
scanf("%ld",&cas);

for(l=0;l<cas;l++){

 scanf("%ld",&n);
 
 equal=0;greater=0;
 
for(i=0;i<n;i++)
{
  scanf("%ld",&m);
  
  if(m==1)
  {
   //printf("ev\n"); 
   equal++;
  }
  
  else
  {
  //printf("od\n");
   greater++;
  }
  
}  

  if(greater==0){
   if(equal%2==0)
    printf("piloop\n");
   else
    printf("poopi\n");
  }
  
  else 
   printf("poopi\n");
                             
  
   
}
return 0;
} 
