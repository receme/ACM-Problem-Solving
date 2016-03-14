
#include<stdio.h>
#include<string.h>

int main(){

    char a[1000];
    long i,j,k,n,m,l,c[1000],b[1000],sum;

    while(scanf("%s",a)){
        if(a[0]=='-')
         break;
        n=strlen(a);
        if(n==1){
         printf("0x%c\n",a[0]);
         continue ; }

        if(!(a[0]=='0'&&a[1]=='x')){
              j=0;
           for(i=0;i<n;i++){
            c[j]=a[i]-48;
            j++; }


           sum=0;k=1;
           for(i=j-1;i>=0;i--){
            sum=sum+(c[i]*k);
            k=k*10;}



           k=0;
           while(sum!=0){
             b[k]=sum%16;
             sum=sum/16;
             k++; }

           // b[k-1]=b[k-1]+1;

          printf("0x");
          for(i=k-1;i>=0;i--){

           if(b[i]==10){
            printf("A");
            continue;}
           if(b[i]==11){
            printf("B");
            continue;}
           if(b[i]==12){
            printf("C");
            continue;}
           if(b[i]==13){
            printf("D");
            continue;}
           if(b[i]==14){
            printf("E");
            continue;}
           if(b[i]==15){
            printf("F");
            continue;}

           printf("%ld",b[i]) ; }
           printf("\n");
        }

      else{
            j=0;
           for(i=2;i<n;i++){
               if(a[i]=='A'||a[i]=='B'||a[i]=='C'||a[i]=='D'||a[i]=='E'||a[i]=='F')
                c[j]=a[i]-55;
               else
                c[j]=a[i]-48;
               j++; }


             sum=0;k=1;
           for(i=j-1;i>=0;i--){
            sum=sum+c[i]*k;
            k=k*16;}

         printf("%ld\n",sum);

}   }

 return 0;
    }






