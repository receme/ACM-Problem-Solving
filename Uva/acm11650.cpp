
#include<stdio.h>
#include<string.h>

int main(){

    char a[100];
    int b[100],i,j,k,n,m,l,p,h,sum,t;

    scanf("%d",&n);

    for(l=0;l<n;l++){

        scanf("%s",a);
        k=strlen(a);
        i=0;
        while(a[i]!=':'){
          b[i]=a[i]-48;
          i++;
          }
          sum=0;p=1;
        for(j=i-1;j>=0;j--){
         sum=sum+b[j]*p;
         p=p*10;}
        h=sum;
        t=0;
        for(j=i+1;j<k;j++){
         b[t]=a[j]-48;
         t++;}
        sum=0;p=1;
        for(j=t-1;j>=0;j--){
         sum=sum+b[j]*p;
         p=p*10; }
         m=sum;
        //printf("%d %d   *",h,m);
        if(h==12&&m==0){
         printf("12:00\n"); continue; }
        if(h==6&&m==0){
         printf("06:00\n"); continue; }
        if(h==11&&m==0){
         printf("01:00\n"); continue; }

        if(h==12){
            m=60-m;
            printf("11:");
            if(m<10)
             printf("0");
             printf("%d\n",m);
             continue;
            }
        if(h==11){
           m=60-m;
           printf("12:");
           if(m<10)
             printf("0");
             printf("%d\n",m);
             continue;
            }

        if(m==0){
        h=12-h;
        m==0;}
        else{
        h=11-h;
        m=60-m; }

        if(h<10)
         printf("0");
        printf("%d:",h);
        if(m<10)
           printf("0");
        printf("%d\n",m);

    }
return 0;
}
