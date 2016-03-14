#include<stdio.h>

int main(){

long c,f,s,i,n,j;
while((scanf("%ld",&n))==1){
 if(n==0)break;
j=0; f=0;s=1;
for(i=2;;i++)
{
 c=s+f;
 s=f;
 f=c;
if(j==n){
printf("%ld\n",c);
break;}
j++;
}
}
return 0;
}