
#include<stdio.h>

int main(){

 int a[51],i,j,l,k,m,n,temp,count;

 scanf("%d",&m);


 for(l=0;l<m;l++){
 scanf("%d",&n);
 count=0;
 if(n==0)
  printf("Optimal train swapping takes 0 swaps.\n");
 else{
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  j=1;k=1;
   for(;;){

   for(;;){
    if(a[k-1]==j){
       j++;
       k++;
       break;}

    for(i=k;i<n;i++){
    if(a[i]==j){
      temp=a[i-1];
      a[i-1]=a[i];
      a[i]=temp;
      count++;
      break;  }}

       }

     if(k==n+1){
     printf("Optimal train swapping takes %d swaps.\n",count);
     break;}
     }}  }
	   
    
    return 0;
    }
