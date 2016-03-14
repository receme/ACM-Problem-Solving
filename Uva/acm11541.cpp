
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

    char a[1000],ch;
    int i,j,k,l,c,m,n,p,sum,b[1000];

    scanf("%d",&n);
c=1;
    for(l=0;l<n;l++){

        scanf("%s",a);
       m=strlen(a);
      j=0;
     printf("Case %ld: ",c);
     for(i=0;i<=m;i++){

        if(a[i]>=65&&a[i]<=90||a[i]=='\0'){
         if(i!=0){
            p=0;sum=0;
          for(k=j-1;k>=0;k--){

           sum=sum+b[k]*pow(10,p);
           p++; }
         for(k=0;k<sum;k++)
          printf("%c",ch);
          j=0;}
         ch=a[i];

         continue; }

       if(a[i]>=48&&a[i]<=57){

         b[j]=a[i]-48;;
         j++;}

     }
     printf("\n");
     c++;
    }
     return 0;
    }


