
#include<stdio.h>
#include<algorithm>
using namespace std;


int main(){
    
 long i,m,n,l,a[60000],b[60000],x,z;
 scanf("%ld",&m);
 
 for(l=0;l<m;l++){
   scanf("%ld %ld %ld",&x,&x,&z);  
   
    
   for(i=0;i<z;i++)
    scanf("%ld %ld",&a[i],&b[i]);
  
  sort(a,a+z);
  sort(b,b+z);
  
  if(z%2!=0)
   i=(z/2)+1;
  else
   i=z/2;
   
 printf("(Street: %ld, Avenue: %ld)\n",a[i-1],b[i-1]);
       
  
  
}

return 0;
}
                    
                    
                      
                      
                    
                    
