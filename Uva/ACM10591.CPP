#include<stdio.h>
#include<string.h>

int main(){

int i,j,k,n,b[1000],sum,m;
char a[1000];

scanf("%d",&n);

for(k=1;k<=n;k++){

scanf("%s",a);

j=strlen(a);

for(i=0;i<j;i++)
b[i]=a[i]-48;

 
 for(;;){
 sum=0;
  for(i=0;i<j;i++)
 sum=sum+(b[i]*b[i]);
 
 if(sum==1){
  printf("Case #%d: %s is a Happy number.\n",k,a);
  break;}
 
 if(sum<10){
  printf("Case #%d: %s is an Unhappy number.\n",k,a);
  break;}
  

 m=sum;

 j=0;
  while(m!=0){
   b[j]=m%10;
   m=m/10;
   j++;
   }
     
  }
   
}
 
 return 0;
 }


