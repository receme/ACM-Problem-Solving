
#include<stdio.h>

int main(){
    long i,j,k,n,m,l,t,s,c,a[100000],b[100000],ch;
    scanf("%ld",&t);
    for(l=0;l<t;l++){
        scanf("%ld",&m);
        scanf("%ld",&n);
        for(i=0;i<n;i++)
         scanf("%ld",&a[i]);
         k=0;
         for(i=0;i<n;i++){
             j=a[i];
           for(;;){
              b[k]=j;
              k++;
              j=j+a[i];
             if(j>m) break; }
         }

         for(j=0;j<k;j++)
          for(i=0;i<k-1;i++)
           if(b[i]>b[i+1]){
              c=b[i];
              b[i]=b[i+1];
              b[i+1]=c; }


    ch=-1;s=0;
     for(j=0;j<k;j++){
        if(b[j]!=ch){
        a[s]=b[j];
        ch=a[s];
        s++; }
     }

   c=s;

   for(j=0;j<s;j++){
       i=a[j];
       if(i>m){c--;
       continue; }
       while(i>0){
         if(i==6||i==7){
          c--;
           break; }

         i=i-7;

       }
   }

   printf("%ld\n",c);

 }


    return 0;
    }


