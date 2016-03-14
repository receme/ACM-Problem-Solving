#include<stdio.h>

long i,j,k,m,n,a[1000000],l,lower;
long binarySearch (long Array[], long top, long target);
int main(){

    while(scanf("%ld %ld",&m,&n)==2){
       if(m==0&&n==0)
        break;
        lower=0;
     for(i=0;i<m;i++)
      scanf("%ld",&a[i]);
      k=0;
    for(i=0;i<n;i++){
     scanf("%ld",&j);
    
  
    l=binarySearch( a,m,j);
    if(l==-2)
    k++;

}

   printf("%ld\n",k);

}

return 0;
}

long binarySearch (long Array[], long top, long target) {

   long  middle, upper;
   
    upper = top;


   while ( upper >= lower  ) {
         middle = ( upper + lower ) / 2;
         if  (Array[middle] == target )
             return( -2 );
         if (Array[middle] < target)
             lower = middle + 1;
            else  upper = middle - 1;
      };

   return(-1);

}




//******************************************************
aitate time besi lagse..............

#include<stdio.h>
#include<map>
using namespace std;

long a,m,n;

int main(){
    
  while(scanf("%ld %ld",&m,&n)==2){
            if(m==0&&n==0) break;
      map<long,long>mp;    
      while(m--){
        scanf("%ld",&a);
        mp[a]=1;
        }
      m=0;
     while(n--){
      scanf("%ld",&a);
      if(mp[a]==1)
       m++;
       } 
     
    
    
   printf("%ld\n",m);     
        }
        
        
        return 0;
        }   
        
           


