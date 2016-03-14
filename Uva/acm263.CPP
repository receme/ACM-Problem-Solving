
#include<stdio.h>
#include<map>
using namespace std;

int main(){
long a[100];
long b,q,n,i,j,t,k,m,l,sum,sum1,sum2;

while((scanf("%ld",&n))==1){
if(n==0)break;
map<long,int>mp;
b=n;  q=0;
printf("Original number was %ld\n",n);
l=0;
for(;;){

i=0;
while(b!=0){
 a[i]=b%10;
 i++;
 b=b/10;
 }

 for(j=0;j<=i-1;j++)
  for(k=0;k<=i-2;k++)
   if(a[k]>a[k+1]){
    q=a[k];
    a[k]=a[k+1];
    a[k+1]=q;
    }

 m=1; sum1=0;
 for(j=i-1;j>=0;j--)
 {sum1=sum1+a[j]*m;
 m=m*10; }


 for(j=0;j<=i-1;j++)
  for(k=0;k<=i-2;k++)
   if(a[k]<a[k+1]){
    q=a[k];
    a[k]=a[k+1];
    a[k+1]=q;
    }

 m=1; sum2=0;
 for(j=i-1;j>=0;j--)
 {sum2=sum2+a[j]*m;
 m=m*10; }

 if(sum1>sum2){
 sum=sum1-sum2;
 printf("%ld - %ld = %ld\n",sum1,sum2,sum);}
 else{
  sum=sum2-sum1;
  printf("%ld - %ld = %ld\n",sum2,sum1,sum);}


 b=sum ;
 l++;
 
  if(mp[sum]==1){
  printf("Chain length %ld\n\n",l);              
   break; }
 mp[sum]=1;

 

 }  }
 return 0;      }
