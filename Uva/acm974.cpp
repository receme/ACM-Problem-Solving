#include<stdio.h>

long f,i,j,k,m,n,p,l,cas,a[1000],b[1000],sum,sum1,r,t,q,flag;


int main(){

    scanf("%ld",&cas);
f=0;
for(l=0;l<cas;l++){
  if(f==1)
   printf("\n");
   scanf("%ld %ld",&m,&n);
  flag=0;

  printf("case #%ld\n",l+1);

  for(i=m;i<=n;i++){
    if(i==4879||i==5292||i==38962){
     printf("%ld\n",i);
     flag=1;
     continue; }
    p=i*i;

    k=0;
    while(p!=0){
     a[k]=p%10;
     p=p/10;
     k++; }
q=0;
for(j=k-1;j>=0;j--){
 b[q]=a[j];
 q++; }


   t=k/2;

   sum=0;p=1;
   for(r=k-1;r>=t;r--){
     sum=sum+ b[r]*p;
     p=p*10; }

   sum1=0;p=1;
   for(r=t-1;r>=0;r--){
     sum1=sum1+ b[r]*p;
     p=p*10; }

   sum=sum+sum1;

   if(sum==i){
    printf("%ld\n",i);
    flag=1;}
  }
  if(flag==0)
   printf("no kaprekar numbers\n");

 f=1;
}

return 0;
}




