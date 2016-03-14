#include<stdio.h>
#include<string.h>

int main(){
char a[30];
int sum,i,n;
while(scanf("%s",a)!=EOF){
sum=0;
 n=strlen(a);
for(i=0;i<n;i++){
 if(a[i]>='a')
 sum=sum+(a[i]-96);
 else
  sum=sum+(a[i]-38); 
 }

n=0;
for(i=2;i<sum;i++)
 if(sum%i==0)
  {n=1; break;}

 if(n==0)
  printf("It is a prime word.\n");
 else
  printf("It is not a prime word.\n",n);

}
return 0;

}
