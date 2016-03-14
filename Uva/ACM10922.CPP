#include<stdio.h>
#include<string.h>

int main(){

char a[1005];
int count,n,i,j,sum,b[1005];


while(gets(a)){

 if(a[0]=='0')break;

n=strlen(a);

for(i=0;i<n;i++)
 b[i]=a[i]-48;

sum=0;
for(i=0;i<n;i++)
sum=sum+b[i];
count=0;
for(;;){
count++;        
if(sum<10)
 break;
 i=0;
 while(sum!=0){
   b[i]=sum%10;
   sum=sum/10;
   i++; }

sum=0;
for(j=0;j<i;j++)
sum=sum+b[j];                
}
  
  if(sum==9)
   printf("%s is a multiple of 9 and has 9-degree %d.\n",a,count);
  else
   printf("%s is not a multiple of 9.\n",a);

 }

 return 0;
 }
