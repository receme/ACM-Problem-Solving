#include<stdio.h>
#include<algorithm>
using namespace std;

int i,a[100],cas,l,n;

int main(){
    
    scanf("%d",&cas);
    
    for(l=0;l<cas;l++){
     
      scanf("%d",&n);
      
       for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
       sort(a,a+n);
       
       n=n/2;
       
       printf("Case %d: %d\n",l+1,a[n]);
       
}

return 0;
}
