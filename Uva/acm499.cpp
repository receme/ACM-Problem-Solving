
#include<stdio.h>
#include<string.h>

int count;
struct s{
  char ch;
  int count;
};

int main(){
    char a[1000],b[1000],big;
    struct s c[1000];
    int i,j,k,n,m;

    while(gets(a)){

        for(i=0;i<1000;i++)
        c[i].count=0;
        n=strlen(a);
        j=0;
       for(i=0;i<n;i++){
         if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
             b[j]=a[i];
             j++;}}

        m=0;
        for(i=65;i<=122;i++){
         for(k=0;k<j;k++){
            if(b[k]==i){
             c[m].count++;
             c[m].ch=i;}
          }
          m++; }

         big=c[0].count;
         for(i=1;i<m;i++)
          if(c[i].count>big)
              big=c[i].count;

       for(i=0;i<m;i++)
        if(c[i].count==big)
         printf("%c",c[i].ch);
         printf(" %d\n",big);

          }

          return 0;
}

