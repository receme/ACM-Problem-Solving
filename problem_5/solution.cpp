#include<stdio.h>
#include<string.h>
#include<ctype.h>

 char a[100],c[100],d[100];
    int i,j,k,n,s[100],sum,r,t;
    int sum1(char c[],int n);
    float f,f1;
int main(){

    while(gets(c)){
        gets(d);
        n=strlen(c);
        r=sum1(c,n);
        n=strlen(d);
        t=sum1(d,n);


     if(r<=t)
      f1=(float)r/t;
     else
      f1=(float)t/r;

      f=f1*100;

    printf("%.2f ",f);
    printf("%c\n",37);

    }

    return 0;
}

 int sum1(char c[],int n){
        k=0;
        for(i=0;i<n;i++)
         if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)){
             a[k]=c[i];
             k++; }

        for(i=0;i<k;i++){
         a[i]=toupper(a[i]);
         s[i]=a[i]-64; }

       sum=0;
       for(i=0;i<k;i++)
       sum=sum+s[i];
     //  printf("%d ",sum); getch();
       while(sum>9){
       k=0;
       while(sum!=0){
        s[k]=sum%10;
        sum=sum/10;
        k++;}

       sum=0;
       for(i=0;i<k;i++)
       sum=sum+s[i];

       }
       return sum;
 }