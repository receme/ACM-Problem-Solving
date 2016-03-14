
#include<stdio.h>
#include<string.h>

int main(){


    char a[21],b[21],d[21],e[21];
    int i,j,n,m,c,p,flag;

    scanf("%d",&c);
      for(p=0;p<c;p++){
        scanf("%s %s",a,b);
        m=strlen(a); n=strlen(b);
        if(m!=n){
         printf("No\n");
         continue;}
        else{
         j=0;
         for(i=0;i<m;i++){
             if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'){
               d[j]=a[i];
                j++; }}
        j=0;
        for(i=0;i<n;i++){
             if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u'){
               e[j]=b[i];
                j++; }}
        m=0;
        for(i=0;i<j;i++){
            if(d[i]!=e[i]){
             printf("No\n");
             m=1;
             break;}}
        if(m==0)
         printf("Yes\n");

        }
    }
return 0;
    }
