#include<stdio.h>
#include<string.h>


char a[100],b[100];
int i,j,k,n,l,cas,flag,p,f1;

int main(){

    scanf("%d",&cas);

for(l=0;l<cas;l++){
  if(l!=0)
   printf("\n");

 scanf("%s",a);

 n=strlen(a);
 if(n==1){
  printf("1\n");
  continue; }

 for(j=1;j<=n;j++){

   for(i=0;i<j;i++)
    b[i]=a[i];

   f1=0;

   for(k=0;k<n;){

      flag=0;
     for(p=0;p<j;p++)
     {


      if(b[p]!=a[k]){
       flag=1;
       break; }

       k++;
     }
      if(flag==1){
       f1=1;

       break; }

   }

   if(f1==0){
    printf("%d\n",j);
    break; }
}
}
return 0;
}
