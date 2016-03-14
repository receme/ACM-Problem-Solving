
#include<stdio.h>


 int main(){

     int i,j,k,n,l,a,b,p;

     scanf("%d",&n);

     for(l=0;l<n;l++){
         scanf("%d %d",&a,&b);

    for(p=0;p<b;p++){
            k=1;
         for(i=1;i<=a;i++){
          for(j=1;j<=k;j++)
           printf("%d",i);
           k++;
           printf("\n");}

         k=a-1;
          for(i=a-1;i>=1;i--){
          for(j=k;j>=1;j--)
           printf("%d",i);
           k--;

           printf("\n");}
if(p!=b-1)
    printf("\n");
    }
  if(l!=n-1)
   printf("\n");

     }


     return 0;
 }

