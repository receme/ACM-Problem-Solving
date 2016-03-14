#include<stdio.h>
#include<string.h>

int isprime(long n){
int i,j,flag;

  if(n==1)return 0;
  if(n%2==0)
   return 0;
  else{
     flag=0;
    for(i=3;i*i<=n;i=i+2)
     if(n%i==0){
      flag=1;
      break;
      }
    if(flag==0)
     return 1;
    else
     return 0;
}}

long circular(long n){
  int p,i,sum,u;
  char a[1000],ch;
sprintf(a,"%ld",n);
  p=strlen(a);

  ch=a[p-1];


  for(i=p-2;i>=0;i--){

   a[i+1]=a[i];
   }
   a[0]=ch;

  sum=0;u=1;
  for(i=p-1;i>=0;i--){
   sum=sum+(a[i]-48)*u;
   u=u*10; }
  return sum;
}



long number[1000000];
int main(){
    long q,j,k,m,o,count=0,f1,l,r,t;
    char b[1000];

    for(q=100;q<1000001;q++){
      k=q;
      f1=0;
      sprintf(b,"%ld",k);
      l=strlen(b);
      for(r=0;r<l;r++){
      j=isprime(k);
      if(j!=1){
       f1=1;
       break;}
      else
       k=circular(k);
      }
      if(f1==0){
       count++;
       number[q]=count;
       }
       number[q]=count;
    }



while(scanf("%ld",&m)==1){
    if(m<0) break;
scanf("%ld",&o);

count=number[o]-number[m-1];


if(count==0)
  printf("No Circular Primes.\n");
 else if(count==1)
  printf("%ld Circular Prime.\n",count);
 else
 printf("%ld Circular Primes.\n",count);

}

return 0;
}





