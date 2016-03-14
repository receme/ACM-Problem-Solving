#include<stdio.h>
int main(){
    int a[200],i,j,k,l,s,m,n;
  
    while(scanf("%d",&n)==1){
       if(n==0)
        break;
       
                
       s=n; 
       for(k=1;;k++){
       n=s;
       for(i=1;i<=n;i++)
         a[i]=i;     
       for(i=1;i<=n;i++)
         a[i]=a[i+1];
          n--;
     m=1;
     for(l=2;l<=s-1;l++){
        m--;
        for(j=0;j<k;j++){
         m++;
         if(m>n)
          m=1; }
   
        for(i=m;i<=n;i++)
         a[i]=a[i+1];
         n--;
         } 
      if(a[n]==2)
         break;
        }    
       printf("%d\n",k);  }

return 0;
}        
           
