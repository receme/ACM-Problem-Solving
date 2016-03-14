#include<stdio.h>

int i,k,n,a[1000],l,cas,sum,p,Q;

int main(){
    
    scanf("%d",&cas);
    
    for(l=0;l<cas;l++){
                       
     scanf("%d %d %d",&n,&p,&Q);
     
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
    k=0;
    sum=0;
    for(i=0;i<n;i++){
     if(k==p) break;
     
     sum=sum+a[i];
     if(sum>Q)
      break;
     k++;
     
   }
   
   printf("Case %d: %d\n",l+1,k);
}

return 0;
}   
