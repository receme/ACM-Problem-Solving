#include<stdio.h>


int main(){
    int i,j,s,k,l,m,n,a[10000];
    
    while(scanf("%d",&n)==1){
    if(n==0)break;
    if(n==1){
     printf("Discarded cards:\n");
     printf("Remaining card: 1\n");
     continue; } 
    
    s=n;
    for(i=1;i<=n;i++)
     a[i]=i;
     k=2;
      for(i=1;i<=n;i++)
         a[i]=a[i+1];
          n--;
     printf("Discarded cards: 1");
     m=1;
     for(l=2;l<=s-1;l++){
        m--;
        for(j=0;j<k;j++){
         m++;
       
        if(m>n)
          m=1; }
         printf(", %d",a[m]);
        for(i=m;i<=n;i++)
         a[i]=a[i+1];
         n--;
          
          }
       printf("\nRemaining card: %d\n",a[n]);
} 
 return 0;
}                          
