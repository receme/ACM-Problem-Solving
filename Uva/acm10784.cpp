#include<stdio.h>
#include<math.h>

long long k=1,n;

int main(){
    
    while(scanf("%lld",&n)==1){
 
     if(n==0) break;
     
     printf ("Case %lld: %lld\n", k++,(int)ceil((3.0+sqrt(9.0+8.0*n))/2.0-1e-10));
     
}

return 0;

}
