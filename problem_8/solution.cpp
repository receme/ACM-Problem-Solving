#include<stdio.h>

int main(){

long a,b,n,j,count,max,max1,temp;

while(scanf("%ld %ld",&a,&b)==2){

 if(a==0&&b==0)
  break;

  if(a==0||b==0)continue;
 if(a==1&&b==1){
   printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
   continue; }

  if(a>b){

   temp=a;
   a=b;
   b=temp;}

  if(a==1&&b==2){
   printf("Between 1 and 2, 1 generates the longest sequence of 3 values.\n");
   continue; }
   
n=a;
max=0;
for(j=a;j<=b;j++){
count=0;
n=j;
while(n!=1){
 if(n%2==0)
  n=n/2;
 else
  n=3*n+1;
  count++;
}
if(count>max) {max=count; max1=j;}

}

printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",a,b,max1,max);

}
return 0;
}