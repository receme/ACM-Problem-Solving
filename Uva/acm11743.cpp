
#include<stdio.h>
#include<string.h>


int main(){

    char a[20];
    int b[20],c[5],i,j,k,n,sum1,sum2,p,m;

    scanf("%d",&n);
    c[4]=0;
    for(k=0;k<=n;k++){

        gets(a);

      j=0;
      for(i=0;i<19;i++){
        if(i==4||i==9||i==14)continue;
        b[j]=a[i]-48;
        j++; }

   sum1=0;
   for(i=1;i<16;i=i+2)
    sum1=sum1+b[i];


sum2=0;
for(i=0;i<16;i++){
 if(i%2!=0)continue;

 m=b[i]*2;
 if(m==0)continue;
 j=0;
 while(m!=0){
  c[j]=m%10;
  m=m/10;
  j++; }

 for(p=0;p<j;p++)
 sum2=sum2+c[p];
   }


   if(c[4]!=0){

     m=sum1+sum2;

     if(m%10==0)
      printf("Valid\n");
    else
     printf("Invalid\n");

   }
     c[4]=1;
    }

    return 0;
}

