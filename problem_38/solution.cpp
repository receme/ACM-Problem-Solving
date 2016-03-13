
#include<stdio.h>
#include<string.h>

int main(){
    char a[100000],b[100000],c[100000];
    int i,j,k,n,m;

    while(scanf("%s %s",a,b)!=EOF){

        m=strlen(a);
        n=strlen(b);

          j=0;
          i=0;
          k=0;
         for(;j<n;j++){
             if(i==m)break;

          if(a[i]==b[j]){
            c[k]=a[i];
            i++;
            k++;}}

        if(m==k)
         printf("Yes\n");
        else{
         printf("No\n");}


    }

    return 0;
}
